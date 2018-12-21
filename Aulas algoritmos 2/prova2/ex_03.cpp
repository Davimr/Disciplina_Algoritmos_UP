#include "stdlib.h"
#include "stdio.h"

void func(int x_num);

int main() {

	int numero = 0;

	printf("Digite o numero: ");
	fflush(stdin);
	scanf_s("%d", &numero);

	func(numero);

	printf("\n\n");
	system("pause");
	return 0;
}

void func(int x_num){

	printf("%d\n", x_num);

	if (x_num < 100) {

		func(x_num + 1);
	}
}
