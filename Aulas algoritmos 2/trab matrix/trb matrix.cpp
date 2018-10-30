#include "stdio.h"
#include "stdlib.h"

int main() {

	int matriz1[5][5] = { {0} }, matriz2[5][5] = { {0} }, matriz3[5][5] = { {0} }, soma = 0, i = 0, j = 0;

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("Digite um numero para a posicao %d-%d da primeira matriz: ", i, j);
			fflush(stdin);
			scanf_s("%d", &matriz1[i][j]);

			printf("Digite um numero para a posicao %d-%d da segunda matriz: ", i, j);
			fflush(stdin);
			scanf_s("%d", &matriz2[i][j]);
		}
	}

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {

			matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
		}
	}

	printf("Soma das matrizes 1 e 2.\n\n");

	for (i = 0; i < 5; i++) {
		printf("\n");
		for (j = 0; j < 5; j++) {
			printf("%d\t", matriz3[i][j]);
		}
	}

	for (i = 0; i < 5; i++) {
		soma += matriz3[i][i];
	}

	printf("\n\n\nA soma da diagonal principal eh %d.", soma);


	printf("\n\n\n");
	system("pause");
	return 0;
}