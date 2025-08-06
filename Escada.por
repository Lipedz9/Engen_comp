programa
{
	//Cada degrau de uma escada tem X de altura. Faça um algoritmo que receba a altura do
	//degrau e altura que o usuário deseja alcançar subindo a escada, calcule e mostre quantos
	//degraus ele deverá subir para atingir seu objetivo, sem se preocupar com a altura do
	//usuário. Todas as medidas fornecidas devem estar em metros.
	funcao inicio()
	{
		real degrau = 0.0, escada = 0.0, quant_d = 0.0

		escreva ("digite a altura do degrau ")
		leia(degrau)
		escreva ("Digite a altura da escada ")
		leia (escada)
		quant_d = escada / degrau 
		escreva ("a quantidade de degraus eh ", quant_d)
		
	}
}
