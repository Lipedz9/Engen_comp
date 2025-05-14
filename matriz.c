#include <stdio.h>

int main() { int matriz[3][3]; int i, j, opcao;

// Inicializando a matriz automaticamente
for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
        matriz[i][j] = 2 * i + j;
    }
}

// Menu de opções
printf("Escolha uma opção:\n");
printf("A) Imprimir todos os elementos da matriz\n");
printf("B) Somar os elementos de cada linha\n");
printf("C) Somar os elementos de cada coluna\n");
printf("D) Imprimir os elementos da diagonal principal\n");
printf("E) Imprimir todos os elementos, exceto os da diagonal principal\n");
printf("F) Imprimir os elementos com linha par e coluna ímpar\n");
printf("G) Imprimir os elementos da coluna 0 apenas\n");
printf("Escolha (A-G): ");
opcao = getchar();

switch(opcao) {
    case 'A':
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                printf("%d ", matriz[i][j]);
            }
            printf("\n");
        }
        break;
    case 'B':
        for (i = 0; i < 3; i++) {
            int soma_linha = 0;
            for (j = 0; j < 3; j++) {
                soma_linha += matriz[i][j];
            }
            printf("Soma da linha %d: %d\n", i, soma_linha);
        }
        break;
    case 'C':
        for (j = 0; j < 3; j++) {
            int soma_coluna = 0;
            for (i = 0; i < 3; i++) {
                soma_coluna += matriz[i][j];
            }
            printf("Soma da coluna %d: %d\n", j, soma_coluna);
        }
        break;
    case 'D':
        for (i = 0; i < 3; i++) {
            printf("%d ", matriz[i][i]);
        }
        printf("\n");
        break;
    case 'E':
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                if (i != j) {
                    printf("%d ", matriz[i][j]);
                }
            }
            printf("\n");
        }
        break;
    case 'F':
        for (i = 0; i < 3; i += 2) {
            for (j = 1; j < 3; j += 2) {
                printf("%d ", matriz[i][j]);
            }
        }
        printf("\n");
        break;
    case 'G':
        for (i = 0; i < 3; i++) {
            printf("%d\n", matriz[i][0]);
        }
        break;
    default:
        printf("Opção inválida.\n");
}

return 0;

}

