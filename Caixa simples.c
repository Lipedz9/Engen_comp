#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float deb, resul;
    int pag;

    printf ("Digite o Valor do débito a ser pago: ");
    scanf("%f", &deb);



    printf (" opcões de pagamento              \n\n");
    printf ("  1: Dinheiro (5%% de desconto)       \n");
    printf ("  2: Cartão de débito              \n");
    printf ("  3: Cartão de Crédito (5%% de juros)\n");
    printf ("  4: sair                       \n\n");

    scanf("%d",&pag);

    switch (pag)
    {
    case 1:
        resul = deb * 0.95;
        printf ("Pagamento em dinheiro\n");
        printf ("valor final a ser pago em dinheiro: %.2f", resul);
    break;
    case 2:
        resul = deb;
        printf("valor final a ser pago no cartão de crédito: ", resul);
    break;
    case 3:
        resul = deb * 1.05;
        printf ("Pagamento em crédito\n");
        printf ("valor final a ser pago em crédito: %.2f", resul);
    break;
    case 4:
        printf("operação cancelada. saindo....");
    break;
    }
return 0;
}
