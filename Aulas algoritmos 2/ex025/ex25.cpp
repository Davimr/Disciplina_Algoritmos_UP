/*Conceitos de alocacao dinamica.*/

#include "stdlib.h"
#include "stdio.h"

int main() {

	float *p, i = 0;

	p = (float*)malloc(10*sizeof(float));

	p[8] = 10.05;

	printf("Idade lida: %.2f", p[8]);

	*p = 20.09;

	printf("\nIdade lida: %.2f", *p);

	printf("\n\nDigite o numero de idades a ser lidas: ");
	fflush(stdin);
	scanf_s("%f", &i);

	p = (float*)realloc(p, i*sizeof(float));

	printf("\n\n\n");
	system("pause");
	free(p);
	return 0;
}