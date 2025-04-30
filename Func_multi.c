#include <stdio.h>

int multiplo(int N){
    if (N % 3 == 0){
        N = 1;
    } else {
        N = 0;
    }
    return N;
}

int main(){
    int N, resultado;
    printf("Digite um número\n");
    scanf("%d", &N);
    resultado = multiplo(N);
    if (resultado == 1){
        printf("Seu número é múltiplo de 3\n");
    } else {
        printf("Seu número não é múltiplo de 3\n");
    }
    return 0;
}
