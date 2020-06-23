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
	char on;
	char limpar;
	char cls;
	
	do
	{
		printf("\r\n*****************************");
		printf("\r\n************ IMC ************");
		printf("\r\n*****************************");
		printf("\r\n\nDigite o peso  (kg): ", peso);
		scanf("%f", &peso);
		printf("Digite a altura (m): ", altura);
		scanf("%f", &altura);
		imc = peso/(altura*altura);	
		printf("\r\nO IMC �: %.2f ", imc);
		
		if(imc > 0)
		{
			if(imc < 18.5)
			{
				printf("(Baixo peso)\n\n");
			}
			if(imc >= 18.5 && imc < 25)
			{
				printf("(Eutr�fico)\n\n");
			}
			if(imc >= 25 && imc < 30)
			{
				printf("(Sobrepeso)\n\n");
			}
			if(imc >= 30 && imc < 35)
			{
				printf("(Obesidade Grau I)\n\n");
			}
			if(imc >= 35 && imc < 40)
			{
				printf("(Obesidade Grau II)\n\n");
			}
			if(imc >= 40)
			{
				printf("(Obesidade Grau III)\n\n");
			}			
		}
		else
		{
			printf("\n\nIMC n�o pode ser menor ou igual a 0(zero)\n\n");
		}
		
		printf("\r\nDeseja continuar? [s/n] ");
		scanf("\n%c", &on);
		if (on == 's' || on == 'S')
		{
			printf("\nDeseja limpar a tela? [s/n] ");
			scanf("\n%c", &limpar);
			if (limpar == 's' || limpar == 'S')					
			{				
				printf("\nO hist�rico da tela ser� apagado e n�o ser� poss�vel recuper�-lo! Tem certeza??? [s/n] ");
				scanf("\n%c", &cls);
				if (cls == 's' || cls == 'S')
				{
					system("cls");
				}						
			}		
		}
	}
	//Mant�m sistema aberto enquanto o usu�rio desejar continuar a executar c�lculos.
	while (on == 's' || on == 'S');
}
