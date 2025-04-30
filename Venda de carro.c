#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    char nome[20], marca, esc;
    float preco, preco_f,seg, parc_m, total_i=0;
    int ano,parc;
    // entrada de dados
    printf("olá, insira seu nome:\n\n");
    scanf("%s", &nome);
    printf(" A marca do carro escolhido, se é (n)acional ou (i)nternacional:\n");
    scanf(" %c", &marca);
    printf("Digite o preço e o ano.\n");
    scanf("%f %d", &preco,&ano);
    //descontos
    if(marca == 'n' || ano <= 2000)
        preco_f = preco * 0.95;
    else
        if(marca == 'i' && ano >= 2000 && ano <= 2020)
            preco_f = preco * 0.97;



     printf("Opções adicionais:\n\n");

    printf("Gostaria de seguro no seu carro com aumento de 5%% no preço final: (s) ou (n) \n");
    scanf(" %c", &esc);
    if(esc == 's')
        preco_f = preco_f + preco * 1.05;

    printf("Gostaria de banco de coro por apenas $2000: (s) ou (n)\n");
    scanf(" %c", &esc);
    if(esc == 's')
    {
        preco_f = preco_f + 2000;
        total_i = total_i + 2000;
    }

    printf("Gostaria de sistema de som por apenas $1000: (s) ou (n)\n");
    scanf(" %c", &esc);
    if(esc == 's')
    {
        preco_f = preco_f + 1000;
        total_i = total_i + 1000;
    }

    printf("Gostaria de vidros eletricos por apenas $300: (s) ou (n)\n");
    scanf(" %c", &esc);
    if(esc == 's')
    {
        preco_f = preco_f + 300;
        total_i = total_i + 300;
    }




    //financiamento
     printf("Opções de financiamento:\n\n");
    printf("Digite o número de parcelas, (Poderá parcelar o valor em até 60 meses, Para parcelas acima de 12 meses, haverá acréscimo de 15%% no valor do veículo)\n");
    scanf("%d", &parc);

    if(parc > 60 || parc < 1)
    {
        printf("Não fazemos nessa quantidade\n");
    }
        else if(parc > 12 && parc <= 60)
        {
            preco_f = preco_f * 1.15;
        }


    printf("\n\n%s ", nome );
    printf("o seu carro de marca %c, Ano %d, Preço Original: %.2f\n",marca,ano, preco);
    seg = preco*0.05;
    printf("o valor do seguro é :%.2f\n", seg);
    printf("vc parcelou em %dX\n", parc);
    parc_m = preco_f/parc;
    printf("Valor da parcela mensal %.2f\n", parc_m);
    printf("Total Gasto com acessorios é: %.2f\n", total_i);
    printf("Valor final do carro é: %.2f\n", preco_f);

    return 0;
}
