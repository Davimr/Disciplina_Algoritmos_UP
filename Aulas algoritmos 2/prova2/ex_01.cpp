#include "stdlib.h"
#include "stdio.h"

float Sal_Bruto(float x_extra, float x_normais);
float Sal_Liquido(float x_bruto);
void Mostra(int x_codigo, float x_normais, float x_extras, float x_liquido, float x_bruto);

int main() {

	int codigo = 0, i = 0;
	float normais = 0.0, extras = 0.0, sal_bruto = 0.0, sal_liquido = 0.0;

	for (i = 0; i < 10; i++) {

		printf("Digite o codigo do %d funcionario: ", i + 1);
		fflush(stdin);
		scanf_s("%d", &codigo);

		printf("\nDigite o numero de horas normais trabalhadas: ");
		fflush(stdin);
		scanf_s("%f", &normais);

		printf("\nDigite o numero de horas extras trabalhadas: ");
		fflush(stdin);
		scanf_s("%f", &extras);

		sal_bruto = Sal_Bruto(extras, normais);

		sal_liquido = Sal_Liquido(sal_bruto);

		Mostra(codigo, normais, extras, sal_liquido, sal_bruto);

		printf("\n\n\n");
	}

	printf("\n\n");
	system("pause");
	return 0;
}

float Sal_Bruto(float x_extra, float x_normais){
	
	float tot = 0.0;

	tot = (x_normais * 12.00) + (x_extra * 15.50);

	return tot;
}

float Sal_Liquido(float x_bruto){

	float liquido = 0.0;

	liquido = x_bruto - (x_bruto * 0.10);

	return liquido;
}

void Mostra(int x_codigo, float x_normais, float x_extras, float x_liquido, float x_bruto){

	printf("\n\nO funcionario %d trabalhou %.2f horas normais e %.2f horas extras.", x_codigo, x_normais, x_extras);
	printf("\n\nIra receber R$ %.2f de salario bruto e R$ %.2f de salario liquido.", x_bruto, x_liquido);
}