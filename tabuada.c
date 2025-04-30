#include <stdio.h>

int main() {
    int n,i,R; 
    printf("informe um número inteiro:\n");
    scanf("%d", &n);

    for(i = 0; i <= 10; i++)
        {
            R = n * i;
            printf("%d x %d = %d\n", n, i , R ); 
        }
    return 0;
}
