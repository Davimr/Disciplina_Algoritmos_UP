#include <stdio.h>
#include <stdlib.h>

#define DIM 5

int main() {

	int vetor1[DIM], vetor2[DIM], i, prod = 0;

	printf("Entre com um vetor de %d elementos. \n", DIM);
	for (i = 0; i < DIM; i++) {
		printf("Elemento %d: ", i);
		fflush(stdin);
		scanf_s("%d", &vetor1[i]);
	}

	printf("\n\n");

	printf("Entre com um outro vetor de %d elementos. \n", DIM);
	for (i = 0; i < DIM; i++) {
		printf("Elemento %d: ", i);
		fflush(stdin);
		scanf_s("%d", &vetor2[i]);
	}

	printf("\n\n");

	for (i = 0; i < DIM; i++) {
		prod = prod + vetor1[i] * vetor2[i];
	}

	printf("O produto vale %d", prod);

	printf("\n\n");
	system("pause");
	return 0;
}


