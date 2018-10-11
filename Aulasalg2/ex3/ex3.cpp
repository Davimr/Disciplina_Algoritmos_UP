#include <stdio.h>
#include <stdlib.h>

int main() {

int numero = 0;

	printf("Digite o numero: \n");
	fflush(stdin);
	scanf_s("%d", &numero);

numero = numero % 2;

	if (numero != 0) {
		printf("Numero impar. \n");
	}
	else {
		printf("Numero par. \n");
	}
			system("pause");
		}

	

	