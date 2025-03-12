#include <stdio.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "portuguese");
float n1, n2, resul;
char op;

printf ("digite o primeiro número: ");
scanf ("%f", &n1);
printf ("digite o segundo número: ");
scanf ("%f", &n2);

printf ("Digite a operação lógica: ");
scanf(" %c", &op);

switch (op)
{
case '+':
    resul = n1 + n2;
    printf ("o resultado é %.2f + %.2f = %.2f \n", n1,n2,resul); break;
      break;

case '-': resul = n1 - n2;
    printf ("o resultado é %.2f - %.2f = %.2f \n", n1,n2,resul); break;

case '/': resul = n1 / n2;
    printf ("o resultado é %.2f / %.2f = %.2f \n", n1,n2,resul); break;

case '*': resul = n1 * n2;
    printf ("o resultado é %.2f * %.2f = %.2f \n", n1,n2,resul); break;

default: printf ("Erro");
}

return 0;
}

