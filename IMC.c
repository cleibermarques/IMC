#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	setlocale(LC_ALL, "portuguese");
	
	float peso;
	float altura;
	float imc;
	float pesoIdealInicial;
	float pesoIdealFinal;
	char on;
	char limpar;
	char cls;
	
	do
	{
		printf("\r\n\n*****************************");
		printf("\r\n************ IMC ************");
		printf("\r\n********* Versão 1.5 ********");
		printf("\r\n\nDigite o peso  (kg): ", peso);
		scanf("%f", &peso);
		printf("Digite a altura (m): ", altura);
		scanf("%f", &altura);
		imc = peso/(altura*altura);	
		pesoIdealInicial = (18.50*(altura*altura));
		pesoIdealFinal = (24.99* (altura*altura));
		printf("\r\nO IMC é: %.2f ", imc);
				
		if(imc > 0)
		{
			if(imc < 18.5)
			{
				printf("(Baixo peso)\n");
			}
			if(imc >= 18.5 && imc < 25)
			{
				printf("(Eutrófico)\n");
			}
			if(imc >= 25 && imc < 30)
			{
				printf("(Sobrepeso)\n");
			}
			if(imc >= 30 && imc < 35)
			{
				printf("(Obesidade Grau I)\n");
			}
			if(imc >= 35 && imc < 40)
			{
				printf("(Obesidade Grau II)\n");
			}
			if(imc >= 40)
			{
				printf("(Obesidade Grau III)\n");
			}			
		}
		else
		{
			printf("\n\nIMC não pode ser menor ou igual a 0(zero)\n\n");
		}
		
		printf("O peso ideal é de %.2f(kg) até %.2f(kg)\r\n", pesoIdealInicial, pesoIdealFinal);
		
		printf("\r\nDeseja continuar? [s/n] ");
		scanf("\n%c", &on);
		if (on == 's' || on == 'S')
		{
			printf("\nDeseja limpar a tela? [s/n] ");
			scanf("\n%c", &limpar);
			if (limpar == 's' || limpar == 'S')					
			{				
				printf("\nO histórico da tela será apagado e não será possível recuperá-lo! Tem certeza??? [s/n] ");
				scanf("\n%c", &cls);
				if (cls == 's' || cls == 'S')
				{
					system("cls");
				}						
			}		
		}
	}
	//Mantém sistema aberto enquanto o usuário desejar continuar a executar cálculos.
	while (on == 's' || on == 'S');
}
