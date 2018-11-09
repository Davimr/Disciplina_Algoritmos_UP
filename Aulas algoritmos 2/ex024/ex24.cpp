/*Tendo como dados de entrada a altura e o sexo (M e F) de uma pessoa, construa um programa que calcule seu peso ideal, utilize funções.*/


#include "stdlib.h"
#include "stdio.h"

float ideal_homem(float p_alturah);
float ideal_mulher(float p_alturam);

int main(){

	float altura = 0.0, peso_ideal = 0.0;
	char sexo;

	printf("Digite o sexo: ");
	fflush(stdin);
	sexo = getchar();

	printf("\nDigite a altura: ");
	fflush(stdin);
	scanf_s("%f", &altura);

	if (sexo == 'M' || sexo == 'm') {
		peso_ideal = ideal_homem(altura);
		printf("\n\nSexo %c com altura %.2f possui peso ideal de %.2f", sexo, altura, peso_ideal);
	}
	else {
		if (sexo == 'F' || sexo == 'f'){
			peso_ideal = ideal_mulher(altura);
			printf("\n\nSexo %c com altura %.2f possui peso ideal de %.2f", sexo, altura, peso_ideal);
		}
		else {
			printf("\n\nCodigo de sexo invalido.");
		}
	}

	printf("\n\n\n");
	system("pause");
	return 0;
}

float ideal_homem(float p_alturah){

	float alturah = 0.0;
	float peso_idealh = 0.0;

	alturah = p_alturah;

	peso_idealh = (72.7 * alturah) - 58;

	return peso_idealh;
}

float ideal_mulher(float p_alturam){

	float alturam = 0.0;
	float peso_idealm = 0.0;

	alturam = p_alturam;

	peso_idealm = (62.1 * alturam) - 44.7;

	return peso_idealm;
}
