// Programa 2
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <locale.h>

#define MAX_LEITURAS 10000
#define MAX_NOME_SENSOR 20

typedef struct {
    long timestamp;
    float valor;
} Leitura;

time_t capturar_timestamp_valido() {
    int dia, mes, ano, hora, min, seg;
    struct tm t;

    while (1) {
        printf("Digite a data e hora (dd mm aaaa hh mm ss): ");
        if (scanf("%d %d %d %d %d %d", &dia, &mes, &ano, &hora, &min, &seg) != 6) {
            while (getchar() != '\n'); 
            printf("Entrada inválida. Tente novamente.\n");
            continue;
        }

        t.tm_year = ano - 1900;
        t.tm_mon = mes - 1;
        t.tm_mday = dia;
        t.tm_hour = hora;
        t.tm_min = min;
        t.tm_sec = seg;
        t.tm_isdst = -1;

        time_t timestamp = mktime(&t);
        if (timestamp == -1) {
            printf("Data inválida. Tente novamente.\n");
        } else {
            return timestamp;
        }
    }
}

int buscar_leitura_mais_proxima(Leitura leituras[], int n, long timestamp_desejado) {
    int esquerda = 0, direita = n - 1;
    int melhor_indice = 0;
    long menor_diferenca = abs(leituras[0].timestamp - timestamp_desejado);

    while (esquerda <= direita) {
        int meio = (esquerda + direita) / 2;
        long diferenca = abs(leituras[meio].timestamp - timestamp_desejado);

        if (diferenca < menor_diferenca) {
            menor_diferenca = diferenca;
            melhor_indice = meio;
        }

        if (leituras[meio].timestamp < timestamp_desejado) {
            esquerda = meio + 1;
        } else if (leituras[meio].timestamp > timestamp_desejado) {
            direita = meio - 1;
        } else {
            return meio;
        }
    }

    return melhor_indice;
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    char nome_sensor[MAX_NOME_SENSOR];
    printf("Digite o nome do sensor (ex: TEMP): ");
    scanf("%s", nome_sensor);

    long timestamp_desejado = capturar_timestamp_valido();

    // Modificando o caminho para buscar os arquivos na pasta 'dados_sensores'
    char nome_arquivo[MAX_NOME_SENSOR + 25]; // Ajuste o tamanho para incluir a pasta e o nome do arquivo
    sprintf(nome_arquivo, "dados_sensores/%s.txt", nome_sensor);

    FILE *arquivo = fopen(nome_arquivo, "r");
    if (!arquivo) {
        printf("Erro ao abrir o arquivo %s.\n", nome_arquivo);
        return 1;
    }

    Leitura leituras[MAX_LEITURAS];
    int quantidade = 0;
    char sensor_lido[MAX_NOME_SENSOR];
    long timestamp;
    float valor;

    while (fscanf(arquivo, "%ld %s %f", &timestamp, sensor_lido, &valor) == 3) {
        leituras[quantidade].timestamp = timestamp;
        leituras[quantidade].valor = valor;
        quantidade++;
    }
    fclose(arquivo);

    if (quantidade == 0) {
        printf("Nenhuma leitura encontrada.\n");
        return 1;
    }

    int indice = buscar_leitura_mais_proxima(leituras, quantidade, timestamp_desejado);

    printf("\nLeitura mais próxima:\n");
    printf("Timestamp: %ld\n", leituras[indice].timestamp);
    printf("Sensor: %s\n", nome_sensor);
    printf("Valor: %.2f\n", leituras[indice].valor);

    return 0;
}
