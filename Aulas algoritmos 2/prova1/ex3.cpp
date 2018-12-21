#include "stdio.h"
#include "stdlib.h"

int main() {

	int  i = 0, x = 0, total = 0;
	float cont = 0.25, tabuleiro[4][4] = { { 0 } };


	for (i = 0; i < 4; i++) {
		for (x = 0; x < 4; x++) {

			cont = cont * 2;

			tabuleiro[i][x] = cont;

			tabuleiro[i][x] = tabuleiro[i][x] * 2;

			total = total + tabuleiro[i][x];

		}
	}

	for (i = 0; i < 4; i++) {
		printf("\n");
		for (x = 0; x < 4; x++) {

			printf("%.f", tabuleiro[i][x]);

			printf("\t");

		}
	}

	printf("\n\n\nTotal de graos %d.", total);

	printf("\n\n\n");
	system("pause");
	return 0;
}
			
		