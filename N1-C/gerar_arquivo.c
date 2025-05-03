#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <string.h>

#define NUM_DE_SENDORES 5
#define NUM_LEITURAS_POR_SENSOR 1000
#define TOTAL_LEITURAS (NUM_DE_SENDORES * NUM_LEITURAS_POR_SENSOR)

const char* sensores[NUM_DE_SENDORES] = {"TEMP", "PRES", "VIBR", "UMID", "FLUX"};

typedef struct {
    time_t timestamp;
    char sensor[10];
    float valor;
} Leitura;

time_t gerar_timestamp_aleatorio(int dia, int mes, int ano) {
    struct tm t;
    t.tm_year = ano - 1900;
    t.tm_mon = mes - 1;
    t.tm_mday = dia;
    t.tm_hour = 0;
    t.tm_min = 0;
    t.tm_sec = 0;
    t.tm_isdst = -1;

    time_t inicio = mktime(&t);
    if (inicio == -1) return -1;

    t.tm_hour = 23;
    t.tm_min = 59;
    t.tm_sec = 59;

    time_t fim = mktime(&t);
    if (fim == -1) return -1;

    return inicio + rand() % (fim - inicio + 1);
}

void embaralhar_dados_aleatoriamente(Leitura* leituras, int n) {
    for (int i = n - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        Leitura temp = leituras[i];
        leituras[i] = leituras[j];
        leituras[j] = temp;
    }
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int dia, mes, ano;
    printf("Digite a data (dd mm aaaa): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    Leitura* leituras = malloc(TOTAL_LEITURAS * sizeof(Leitura));
    if (!leituras) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    srand((unsigned int)time(NULL));


    int idx = 0;
    for (int i = 0; i < NUM_DE_SENDORES; i++) {
        for (int j = 0; j < NUM_LEITURAS_POR_SENSOR; j++) {
            leituras[idx].timestamp = gerar_timestamp_aleatorio(dia, mes, ano);
            strcpy(leituras[idx].sensor, sensores[i]);
            leituras[idx].valor = ((float)rand() / RAND_MAX) * 100.0f;
            idx++;
        }
    }

    embaralhar_dados_aleatoriamente(leituras, TOTAL_LEITURAS);

    FILE *arquivo = fopen("entrada.txt", "w");
    if (!arquivo) {
        printf("Erro ao criar o arquivo de entrada.\n");
        free(leituras);
        return 1;
    }

    for (int i = 0; i < TOTAL_LEITURAS; i++) {
        fprintf(arquivo, "%ld %s %.2f\n", leituras[i].timestamp, leituras[i].sensor, leituras[i].valor);
    }

    fclose(arquivo);
    free(leituras);

    printf("Arquivo 'entrada.txt' gerado com sucesso!\n");
    return 0;
}
