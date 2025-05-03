#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <sys/stat.h>
#include <windows.h> 

#define MAX_SENSORES 100
#define MAX_NOME_SENSOR 20
#define MAX_LEITURAS 10000

typedef struct {
    long timestamp;
    float valor;
} Leitura;

typedef struct {
    char nome[MAX_NOME_SENSOR];
    Leitura leituras[MAX_LEITURAS];
    size_t quantidade;  
} Sensor;

Sensor sensores[MAX_SENSORES];
int quantidade_sensores = 0;

int comparar_leituras(const void *a, const void *b) {
    Leitura *l1 = (Leitura *)a;
    Leitura *l2 = (Leitura *)b;
    if (l1->timestamp < l2->timestamp) return -1;
    if (l1->timestamp > l2->timestamp) return 1;
    return 0;
}

void criar_pasta(const char *pasta) {
    if (CreateDirectory(pasta, NULL) == 0) {
        if (GetLastError() != ERROR_ALREADY_EXISTS) {
            printf("Erro ao criar a pasta: %ld\n", GetLastError());
        }
    }
}

int encontrar_ou_criar_sensor(const char *nome_sensor) {
    for (int i = 0; i < quantidade_sensores; i++) {
        if (strcmp(sensores[i].nome, nome_sensor) == 0) {
            return i;
        }
    }

    strcpy(sensores[quantidade_sensores].nome, nome_sensor);
    sensores[quantidade_sensores].quantidade = 0;
    return quantidade_sensores++;
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    criar_pasta("dados_sensores");
    
    FILE *entrada = fopen("entrada.txt", "r");
    if (!entrada) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }

    long timestamp;
    char id_sensor[MAX_NOME_SENSOR];
    float valor;
    
    while (fscanf(entrada, "%ld %s %f", &timestamp, id_sensor, &valor) == 3) {
        int indice = encontrar_ou_criar_sensor(id_sensor);
        sensores[indice].leituras[sensores[indice].quantidade].timestamp = timestamp;
        sensores[indice].leituras[sensores[indice].quantidade].valor = valor;
        sensores[indice].quantidade++;
    }

    fclose(entrada);

    for (int i = 0; i < quantidade_sensores; i++) {
        qsort(sensores[i].leituras, (size_t)sensores[i].quantidade, sizeof(Leitura), comparar_leituras);

        char nome_arquivo[MAX_NOME_SENSOR + 25];
        sprintf(nome_arquivo, "dados_sensores/%s.txt", sensores[i].nome);

        FILE *saida = fopen(nome_arquivo, "w");
        if (!saida) {
            printf("Erro ao criar o arquivo %s.\n", nome_arquivo);
            continue;
        }

        for (size_t j = 0; j < sensores[i].quantidade; j++) {  
            fprintf(saida, "%ld %s %.2f\n", sensores[i].leituras[j].timestamp, sensores[i].nome, sensores[i].leituras[j].valor);
        }

        fclose(saida);

        unsigned long quantidade = (unsigned long)sensores[i].quantidade;
        printf("Arquivo %s criado com %lu leituras.\n", nome_arquivo, quantidade); 
    }

    return 0;
}
