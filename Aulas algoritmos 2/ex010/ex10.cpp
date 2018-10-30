#include <stdio.h>
#include <stdlib.h>

int main() {

	int numero = 0, i = 0;

	printf("Digite o numero desejado: \t");
	fflush(stdin);
	scanf_s("%d", &numero);

	for (i = 0; i <= numero; i++)  {
		printf("\n %d% \n\n", i);

	}

	system("pause");
}