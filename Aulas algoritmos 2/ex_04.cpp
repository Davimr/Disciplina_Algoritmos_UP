#include "stdlib.h"
#include "stdio.h"

int main() {

	float salario = 0.0;
	float *p_sal1, *p_sal2;

	printf("Digite um salario: ");
	fflush(stdin);
	scanf_s("%f", &salario);

	p_sal1 = &salario;
	p_sal2 = p_sal1;

	*p_sal1 = 100000.00;

	printf("\n\n%.2f", *p_sal2);

	printf("\n\n%d  %d", p_sal1, p_sal2);

	printf("\n\n\n");
	system("pause");
	return 0;
}