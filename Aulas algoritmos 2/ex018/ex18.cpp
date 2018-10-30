#include <stdio.h>
#include <stdlib.h>

#define DIML 3
#define DIMC 5

int main() {

	int x, y, matriz[DIML][DIMC];

	for (x = 0; x < DIML; x++) {
		for (y = 0; y < DIMC; y++) {
			printf("\nInforme a posicao %d, %d da matriz: ", x, y);
			fflush(stdin);
			scanf_s("%d", &matriz[x][y]);
		}
	}


	printf("\n\n");

	for (x = 0; x < DIML; x++) {
		for (y = 0; y < DIMC; y++) {
			printf("   %d   ", matriz[x][y]);
		}
		printf("\n");
	}



	printf("\n\n");
	system("pause");
	return 0;

}

