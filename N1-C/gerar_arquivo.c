#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#define NUM_SENSORES 5
#define NUM_LEITURAS_POR_SENSOR 1000

const char* sensores[NUM_SENSORES] = {"TEMP", "PRES", "VIBR", "UMID", "FLUX"};

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

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int dia, mes, ano;
    printf("Digite a data (dd mm aaaa): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    FILE *arquivo = fopen("entrada.txt", "w");
    if (!arquivo) {
        printf("Erro ao criar o arquivo de entrada.\n");
        return 1;
    }

    srand(time(NULL));

    for (int i = 0; i < NUM_SENSORES; i++) {
        for (int j = 0; j < NUM_LEITURAS_POR_SENSOR; j++) {
            time_t timestamp = gerar_timestamp_aleatorio(dia, mes, ano);
            float valor = ((float)rand()/(float)(RAND_MAX)) * 100.0; // valor entre 0.0 e 100.0

            fprintf(arquivo, "%ld %s %.2f\n", timestamp, sensores[i], valor);
        }
    }
    
    fclose(arquivo);

    printf("Arquivo 'entrada.txt' gerado com sucesso!\n");
    return 0;
}
