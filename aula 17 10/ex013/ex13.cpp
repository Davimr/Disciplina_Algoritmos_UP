#include <stdio.h>
#include <stdlib.h>

int main() {

	int cont = 0, contagem = 0;

	for (;;) {
		printf("\n\n Digite um numero inteiro: \t");
		fflush(stdin);
		scanf_s("%d", &cont);
		if (cont == 0) {
			break;
		}
		contagem = contagem + 1;
	}

	printf("\n\nA quantidade de numeros foi %d", contagem);

	printf("\n\n");

	system("pause");
}
