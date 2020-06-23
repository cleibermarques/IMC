#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	setlocale(LC_ALL, "portuguese");
	
	float peso, altura, imc;
	
	//do
//	{
		printf("Digite o peso (kg): ", peso);
		scanf("%f", &peso);
		printf("Digite a altura (m): ", altura);
		scanf("%f", &altura);
		imc = peso/(altura*altura);
		printf("O IMC é: %.2f ", imc);
		
		if(imc < 18,5)
		{
			printf("(Baixo peso)\n\n");
		}
		
		else if(imc >= 18,5 || imc < 25,0)
		{
			printf("(Eutrófico)\n\n");
		}
		
		else if(imc >= 25,0 || imc < 30,0)
		{
			printf("(Sobrepeso)\n\n");
		}
		
		else if(imc >= 30,0 || imc < 35,0)
		{
			printf("(Obesidade Grau I)\n\n");
		}
		
		else if(imc >= 35,0 || imc < 40,0)
		{
			printf("(Obesidade Grau II)\n\n");
		}
		
		else if(imc > 40,0)
		{
			printf("(Obesidade Grau III)\n\n");
		}
		return 0;
//	}
	//while ((operacao < 1 || operacao > 4)||(operacao == 4 && number2 == 0));
	//return 0;
}
