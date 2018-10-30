#include <stdio.h>
#include <stdlib.h>

int main() {

	int numero[5], cont = 0;

	for (cont = 0; cont < 50; cont++) {
		printf("Digite o numero: ");
		fflush(stdin);
		scanf_s("%d", &numero[cont]);
	}

	for (cont = 0; cont < 50; cont++) {
		printf("\n\n%d", numero[cont]);
	}






	printf("\n\n");
	system("pause");
	return 0;

}
