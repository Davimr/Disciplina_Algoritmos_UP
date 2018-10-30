#include <stdio.h>
#include <stdlib.h>

#define DIM 5

int main() {

	int vetor[DIM], i = 0, num = 0;

	printf("Entre com um numero inicial para o conjunto: ");
	fflush(stdin);
	scanf_s("%d", &num);

	for (i = 0; i < DIM; i++) {
		vetor[i] = num++;
	}

	printf("\n\n");

	for (i = 0; i < DIM; i++) {
		printf("Elemento %d = %d\n", i, vetor[i]);
	}

	printf("\n\n");
	system("pause");
	return 0;

}

