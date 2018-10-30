#include <stdio.h>
#include <stdlib.h>

#define DIML 5
#define DIMC 3

int main() {

	int matriz1[DIML][DIMC], matriz2[DIML][DIMC], matriz3[DIML][DIMC], x, y;

	for (x = 0; x < DIML; x++) {
		for (y = 0; y < DIMC; y++) {
			printf("\nEscreva um numero para a matriz 1 na posicao %d,%d : ", x, y);
			fflush(stdin);
			scanf_s("%d", &matriz1[x][y]);
		}
	}

	printf("\n\n");

	for (x = 0; x < DIML; x++) {
		for (y = 0; y < DIMC; y++) {
			printf("\nEscreva um numero para a matriz 2 na posicao %d,%d : ", x, y);
			fflush(stdin);
			scanf_s("%d", &matriz2[x][y]);
		}
	}

	printf("\n\n");

	for (x = 0; x < DIML; x++) {
		for (y = 0; y < DIMC; y++) {
			matriz3[x][y] = matriz1[x][y] + matriz2[x][y];
		}
	}

	printf("\n\n");

	for (x = 0; x < DIML; x++) {
		for (y = 0; y < DIMC; y++) {
			printf("  %d  ", matriz3[x][y]);
		}
		printf("\n");
	}


	printf("\n\n");
	system("pause");
	return 0;
}