programa
{
	//Faça um algoritmo que receba um número inteiro de 3 casas e imprima o algarismo da casa das dezenas.	
	funcao inicio()
	{
		inteiro numero = 0, divisao

		escreva ("digite um número com 3 casas  ")
		leia(numero)
		divisao = (numero/10)%10

		escreva("o decimal é ", divisao)
	}
}

/*O usuário informa um número e o sistema mostra a parte inteira e a parte
decimal separadas. Por exemplo: ao digitar 5.18, o sistema imprimirá: parte
inteira = 5 e parte decimal = 0.18*/
