/*3. Elaborar um algoritmo que leia números e imprima no final quantos números entre
100 e 200 foram digitados. Quando o valor 0 (zero) for lido, o algoritmo deve parar a
sua execução.*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int num = 0, i=0;
    do
    {
        printf("Digite um número \n\n");
        scanf("%d", &num);
        if(num >=100 && num <= 200)
        {
            i++;
        }

    }
    while(num != 0);
    printf("foi encontrado %d no intervalo de 100 e 200:\n", i);
return 0;
}
