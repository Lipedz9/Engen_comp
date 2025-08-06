programa
{
	//Faça um algoritmo que receba um número e
	//imprima seu antecessor e seu sucessor.	
	funcao inicio()
	{
		inteiro numero = 0 , ant = 0 , dep = 0

		escreva("digite um numero: ")
		leia(numero)
		ant = numero - 1
		dep = numero + 1
		escreva ("o antecessor eh  ", ant, " \no sucessor eh  ", dep)
		
	}
}
