#include <stdio.h>
#include <locale.h>

void idp(int n){
    int triangulo [n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++);{
        triangulo [i][j];    
    }
}
    for(int i = 0; i < n; i++){
     triangulo [i][0];  
        for(int j = 0; j < n; j++){
            triangulo [i][j] = triangulo [i-1][j-1] + triangulo [i-1][j-1];
        } 
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++);{
            printf("%d", triangulo [i][j]);
        }
    printf("\n");
    }
}
int main(){
setlocale(LC_ALL, "Portuguese");
int l;

    printf("Digite o Número de linhas do triângulo de pascal:\n");
    scanf("%d",&l);

    idp(linhas);
return 0;
}
