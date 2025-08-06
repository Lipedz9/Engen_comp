programa
{
	
//Faça um algoritmo que leia um número inteiro entre 0 e 60 e imprima o seu sucessor, sabendo que o sucessor de 60 é 0. Não pode ser utilizado nenhum comando de seleção ou repetição.
	funcao inicio()
	{
		inteiro numero = 0, sucessor = 0

		escreva("digite um numero ")
		leia(numero)
		sucessor = numero + 1
		escreva("o sucessor eh : ", sucessor%61)
		
	}
}

