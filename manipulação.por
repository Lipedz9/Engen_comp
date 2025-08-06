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
