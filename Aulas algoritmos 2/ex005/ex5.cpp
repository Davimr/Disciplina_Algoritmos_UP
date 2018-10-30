#include <stdio.h>
#include <stdlib.h>

int main() {

	int idade = 0;

	printf("Digite a idade da pessoa: \t");
	fflush(stdin);
	scanf_s("%d", &idade);

	if (idade >= 18 || idade <= 65) {
		printf("\n\n\A idade esta entre 18 e 65.\n\n");
	}
	system("pause");
}
