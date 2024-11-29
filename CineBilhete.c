#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Procedimento para exibir o slogan
void Mostrar_Slogan() {
    printf("\t\t========================\n");
    printf("\t\tBEM-VINDO AO CINEBILHETE\n");
    printf("\t\t========================\n\n");
}

// Lista os filmes disponíveis
void Lista_de_Filmes() {
    printf("\nLISTA DE FILMES:\n");
    printf("[ 1 ] VENOM\n");
    printf("[ 2 ] MOANA 2\n");
    printf("[ 3 ] ROBO SELVAGEM\n");
    printf("[ 4 ] A FREIRA\n");
    printf("ESCOLHA: ");
}

// Procedimento para exibir o menu de opções
void Mostrar_Opcoes_Menu() {
    printf("MENU CINEBILHETE:\n");
    printf("[ 1 ] RESERVAR LUGAR\n");
    printf("[ 2 ] IMPRESSAO DO BILHETE\n");
    printf("[ 3 ] CANCELAR COMPRA\n");
    printf("[ 4 ] SAIR\n");
    printf("ESCOLHA: ");
}
// Dimensões da matriz de assentos
#define LINHAS 5
#define COLUNAS 5
#define FILMES 4 // Número de filmes
#define MAX_BILHETES 4

// Matriz tridimensional para os assentos
char lugares[FILMES][LINHAS][COLUNAS];

// Inicializa os assentos para todos os filmes
void Inicializar_Assentos() {
    for (int filme = 0; filme < FILMES; filme++) {
        for (int i = 0; i < LINHAS; i++) {
            for (int j = 0; j < COLUNAS; j++) {
                lugares[filme][i][j] = 'D'; 
            }
        }
    }
}

// Exibe os assentos para o filme selecionado
void Exibir_Assentos(int filme) {
    printf("\nMapa de Assentos (D = Disponivel, X = Ocupado) do Filme %d:\n", filme + 1);
    printf("   ");
    for (int i = 0; i < COLUNAS; i++) {
        printf("%2d ", i + 1);
    }
    printf("\n");
    for (int i = 0; i < LINHAS; i++) {
        printf("%2d ", i + 1);
        for (int j = 0; j < COLUNAS; j++) {
            printf(" %c ", lugares[filme][i][j]);
        }
        printf("\n");
    }
}

// Reserva um lugar para o filme selecionado
int num_bilhete_gerado = 0;  // Número do bilhete
int filme_reservado = -1; // Filme reservado 
int linha_reservada = -1; // Linha do assento reservado
int coluna_reservada = -1; // Coluna do assento reservado

// Reserva um lugar para o filme selecionado
void Reservar_Lugar(int filme, int *linha, int *coluna) {
    while (1) {
        printf("\nEscolha o lugar desejado:\n");
        printf("Linha (1 a %d): ", LINHAS);
        scanf("%d", linha);
        printf("Coluna (1 a %d): ", COLUNAS);
        scanf("%d", coluna);

        if (*linha < 1 || *linha > LINHAS || *coluna < 1 || *coluna > COLUNAS) {
            printf("Lugar invalido! Tente novamente.\n");
        } else if (lugares[filme][*linha - 1][*coluna - 1] == 'X') {
            printf("Lugar ja ocupado! Escolha outro.\n");
        } else {
            lugares[filme][*linha - 1][*coluna - 1] = 'X'; // Marcar o lugar como ocupado

            // Gera o número do bilhete
            num_bilhete_gerado = rand() % 100000 + 10000;

            // Armazena o filme e o assento reservado
            filme_reservado = filme;
            linha_reservada = *linha;
            coluna_reservada = *coluna;
            break;
        }
    }
}


// Adicionar combo de Pipoca e Refrigerante
int Adicionar_Combo() {
    int opcao;
    do {
        printf("\nDeseja adicionar um combo ao pedido? (pipoca + refrigerante)\n");
        printf("[ 1 ] Sim\n");
        printf("[ 2 ] Nao\n");
        printf("Escolha: ");
        scanf("%d", &opcao);
        if (opcao != 1 && opcao != 2) {
            printf("Opcao invalida! Tente novamente.\n");
        }
    } while (opcao != 1 && opcao != 2);
    return opcao;
}

// Escolher tipo de ingresso(INTEIRO / MEIA)
int Escolha_do_ingresso() {
    int opcao;
    do {
        printf("\nSeu ingresso e inteiro ou meia-entrada?\n");
        printf("[ 1 ] Inteiro\n");
        printf("[ 2 ] Meia-entrada\n");
        printf("Escolha: ");
        scanf("%d", &opcao);
        if (opcao != 1 && opcao != 2) {
            printf("Opcao invalida! Tente novamente.\n");
        }
    } while (opcao != 1 && opcao != 2);
    return opcao;
}



// Gera o bilhete com base no filme e assento
void Gerar_Bilhete(int filme, int linha, int coluna) {
    printf("\n--- Bilhete CineBilhete ---\n");
    printf("Numero do Bilhete: %d\n", num_bilhete_gerado);
    printf("Filme: ");
    switch (filme + 1) {
        case 1: printf("VENOM\n"); break;
        case 2: printf("MOANA 2\n"); break;
        case 3: printf("ROBO SELVAGEM\n"); break;
        case 4: printf("A FREIRA\n"); break;
        default: printf("Desconhecido\n"); break;
    }
    printf("Assento: Linha %d, Coluna %d\n", linha, coluna);
}

struct Precos_Ingressos {
    float inteiro;
    float meia;
    float combo;
};

typedef struct Precos_Ingressos Precos_Ingressos;

// Função principal
int main() {
    Precos_Ingressos preco = {45.56, 25.56, 18.50};
    float tot_vend_ingresso = 0;

    int opcao_menu;
    int opcao_filmes;
    int linha, coluna;
    int opcao_combo;
    int opcao_ingresso;
    const char *tipo_ingresso[] = {"Inteiro", "Meia-Entrada"};
    int verificador_ingresso;
    int qtd_ingressos_vend = 0 ;
    int qtd_combo_vend = 0 ;
    float total_vend_secao = 0 ;

    srand(time(0)); 
    Inicializar_Assentos();
    Mostrar_Slogan();

    do {
        printf("\n");
        Mostrar_Opcoes_Menu();
        scanf("%d", &opcao_menu);

        switch (opcao_menu) {
            case 1: // Reservar Lugar
                Lista_de_Filmes();
                scanf("%d", &opcao_filmes);
                if (opcao_filmes < 1 || opcao_filmes > FILMES) {
                    printf("Opcao invalida!\n");
                    break;
                }
                Exibir_Assentos(opcao_filmes - 1);
                Reservar_Lugar(opcao_filmes - 1, &linha, &coluna);
                opcao_combo = Adicionar_Combo();

                if (opcao_combo == 1)
                {
                    qtd_combo_vend ++;
                } 

                opcao_ingresso = Escolha_do_ingresso();
                qtd_ingressos_vend ++;

                if (opcao_combo == 1  && opcao_ingresso == 1) { 
                    tot_vend_ingresso = preco.combo + preco.inteiro;
                } 
                else if (opcao_combo == 1 && opcao_ingresso == 2) {
                    tot_vend_ingresso = preco.combo + preco.meia;
                } 
                else if (opcao_combo == 2 && opcao_ingresso == 1) {
                    tot_vend_ingresso = preco.inteiro; 
                    
                } else if (opcao_combo == 2 && opcao_ingresso == 2) { 
                    tot_vend_ingresso = preco.meia; 
                }

                
                total_vend_secao += tot_vend_ingresso;
                break;

            case 2: // Impressão do Bilhete
                if (num_bilhete_gerado != 0)
                {
                    Gerar_Bilhete(opcao_filmes - 1, linha, coluna);
                    // COMBO: [1] SIM [2] NÃO  | INGRESSO: [1] INTEIRO [2] MEIA
                if (opcao_combo == 1  && opcao_ingresso == 1) {
                    printf("Combo: Pipoca Grande + Refrigerante\n");
                    printf("Tipo de Ingresso: %s\n", tipo_ingresso[opcao_ingresso - 1]);
                    printf("Valor a pagar: R$%.2f\n", tot_vend_ingresso); 

                } else if (opcao_combo == 1 && opcao_ingresso == 2) {
                    printf("Combo: Pipoca Grande + Refrigerante\n");
                    printf("Tipo de Ingresso: %s\n", tipo_ingresso[opcao_ingresso - 1]);  
                    printf("Valor a pagar: R$%.2f\n", tot_vend_ingresso); 

                } else if (opcao_combo == 2 && opcao_ingresso == 1) {
                    printf("Tipo de Ingresso: %s\n", tipo_ingresso[opcao_ingresso - 1]);
                    printf("Valor a pagar: R$%.2f\n", tot_vend_ingresso); 
                    
                } else if (opcao_combo == 2 && opcao_ingresso == 2) {
                    printf("Tipo de Ingresso: %s\n", tipo_ingresso[opcao_ingresso - 1]);
                    printf("Valor a pagar: R$%.2f\n", tot_vend_ingresso); 
                }
                }

                else{
                    printf("Nao ha nenhum bilhete a ser Impresso!\n");
                }
                
                break;

            case 3: // Cancelamento de Bilhete
                if (num_bilhete_gerado != 0) {
                    printf("\nDigite o numero do bilhete para cancelar:");
                    scanf("%d", &verificador_ingresso);

                    if (verificador_ingresso == num_bilhete_gerado) {
                        printf("Bilhete %d esta sendo cancelado!\n", num_bilhete_gerado);
                        printf("Reserva Cancelada!\n");

                        lugares[filme_reservado][linha_reservada - 1][coluna_reservada - 1] = 'D'; // Marca os lugares como Disponiveis novamente

                        num_bilhete_gerado = 0; // Reseta o bilhete
                        filme_reservado = -1; // Reseta o Filme
                        linha_reservada = -1; // Reseta a Linha
                        coluna_reservada = -1; // Reseta A coluna

                        total_vend_secao = 0; // Reseta O valor vendido na seção
                        qtd_combo_vend = 0; // Reseta a quantidade de combos vendidos
                        qtd_ingressos_vend = 0; // Reseta a quantidade de ingressos vendidos
                        
                    } else {
                        printf("Bilhete %d nao encontrado. Verifique o numero digitado.\n", verificador_ingresso);
                    }
                } else {
                    printf("Nao ha nenhum bilhete a ser cancelado!\n");
                }
                break;

            case 4: // Sair e Finalização
                if (qtd_ingressos_vend != 0)
                {
                    
                    printf("\nIngressos vendidos: %d\n", qtd_ingressos_vend);
                    if (qtd_combo_vend == 0)
                    {
                        printf("Nenhum combo Vendido!\n");
                    }
                    else{
                        printf("Combos vendidos: %d\n", qtd_combo_vend);
                    }
                    printf("Arrecadado na secao: R$%.2f\n", total_vend_secao );

                    printf("\n\t\t========================\n");
                    printf("\t\tOBRIGADO PELA PREFERENCIA!\n");
                    printf("\t\t========================\n\n");
                }
                else{
                    printf("\t\t========================\n");
                    printf("\t\tOBRIGADO PELA PREFERENCIA!\n");
                    printf("\t\t========================\n\n");
                }
                
                break;

            default:
                printf("Opcao invalida! Tente novamente.\n");
        }

    } while (opcao_menu != 4);

    return 0;
}
