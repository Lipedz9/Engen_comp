#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float notas[10] = {7 , 8 , 4 , 8 , 10 , 6 , 7 , 8 , 7 ,9}, media = 0;
    int i;
// notas
    for (i = 0; i < 10; i++)
    {
        do {
            //printf("Digite a nota %d (entre 0 e 10\n): ", i + 1);
            //scanf("%f", &notas[i]);
//verificação
            if (notas[i] < 0 || notas[i] > 10) {
                printf("Nota inválida! Por favor, digite novamente.\n");
            }

        } while (notas[i] < 0 || notas[i] > 10);

        media += notas[i];
    }

    media /= 10;

    printf("\nMédia das notas: %.2f\n", media);

// Varredura para mostrar as notas acima da média
    printf("Notas acima da média:\n");
    for (i = 0; i < 10; i++)
    {
        if (notas[i] > media) {
            printf("Nota %d: %.2f\n", i + 1, notas[i]);
        }
    }
return 0;
}
