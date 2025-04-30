#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // Inicializa a semente randômica com o tempo atual

    int num = rand() % 100 + 1; // Gera um número aleatório entre 1 e 100
    int tent;

    do {
        printf("Adivinhe o número (entre 1 e 100): ");
        scanf("%d", &tent);

        if (tent < num) {
            printf("O número que você digitou é menor do que o número correto.\n");
        } else if (tent > num) {
            printf("O número que você digitou é maior do que o número correto.\n");
        }

    } while (tent != num);

    printf("Parabéns! Você acertou o número %d.\n", num);

    return 0;
}
