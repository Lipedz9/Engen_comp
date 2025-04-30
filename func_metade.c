#include <stdio.h>

int metade(int N){
    int R;
    if(N>=20){
        R = N/2;
    }else{
        R = 0;
    }
    return R;
}
int main(){
    int N,Resultado;
    printf("Digite um número\n");
    scanf("%d",&N);
    Resultado = metade(N);
    if(N >= 10){
        printf("Seu número eh: %d\n",Resultado);
    }else{
        printf("Seu número eh: %d\n",N);
    }
        
    
    return 0;
}
código da questão lista de sub-rotina
