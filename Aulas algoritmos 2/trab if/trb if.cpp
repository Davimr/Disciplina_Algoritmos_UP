#include "stdio.h"
#include "stdlib.h"

int main() {

	int i = 0;
	float a = 0.0, b = 0.0, c = 0.0;

	printf("Digite 1 para numeros em ordem crescente, 2 decrescente e 3 para maior numero no meio: ");
	fflush(stdin);
	scanf_s("%d", &i);

	printf("\nDigite o valor de a: ");
	fflush(stdin);
	scanf_s("%f", &a);

	printf("\nDigite o valor de b: ");
	fflush(stdin);
	scanf_s("%f", &b);

	printf("\nDigite o valor de c: ");
	fflush(stdin);
	scanf_s("%f", &c);

	printf("\n\n");

	if (i == 1) {
		if (a > b) {
			if (a > c) {
				if (b > c) {
					printf("%.2f% > %.2f% > %.2f%   \n\n", c, b, a);
				}
				if (c > b) {
					printf("%.2f% > %.2f% > %.2f%   \n\n", b, c, a);
				}
			}
			if (a < c) {
				printf("%.2f% > %.2f% > %.2f%   \n\n", b, a, c);
			}
		}
		if (a < b) {
			if (c < b) {
				if (a < c) {
					printf("%.2f% > %.2f% > %.2f%   \n\n", a, c, b);
				}
				if (a > c) {
					printf("%.2f% > %.2f% > %.2f%   \n\n", c, a, b);
				}
			}
			if (c > a) {
				printf("%.2f% > %.2f% > %.2f%   \n\n", a, b, c);

			}
		}
	}

	if (i == 2) {
		if (a > b) {
			if (a > c) {
				if (b > c) {
					printf("%.2f% > %.2f% > %.2f%   \n\n", a, b, c);
				}
				if (c > b) {
					printf("%.2f% > %.2f% > %.2f%   \n\n", a, c, b);
				}
			}
			if (a < c) {
				printf("%.2f% > %.2f% > %.2f%   \n\n", c, a, b);
			}
		}
		if (a < b) {
			if (c < b) {
				if (a < c) {
					printf("%.2f% > %.2f% > %.2f%   \n\n", b, c, a);
				}
				if (a > c) {
					printf("%.2f% > %.2f% > %.2f%   \n\n", b, a, c);
				}
			}
			if (c > a) {
				printf("%.2f% > %.2f% > %.2f%   \n\n", c, b, a);

			}
		}
	}

	if (i == 3) {
		if (a > b) {
			if (a > c) {
				if (b > c) {
					printf("%.2f% > %.2f% > %.2f%   \n\n", c, a, b);
				}
				if (c > b) {
					printf("%.2f% > %.2f% > %.2f%   \n\n", b, a, c);
				}
			}
			if (a < c) {
				printf("%.2f% > %.2f% > %.2f%   \n\n", b, c, a);
			}
		}
		if (a < b) {
			if (c < b) {
				if (a < c) {
					printf("%.2f% > %.2f% > %.2f%   \n\n", a, b, c);
				}
				if (a > c) {
					printf("%.2f% > %.2f% > %.2f%   \n\n", c, b, a);
				}
			}
			if (c > a) {
				printf("%.2f% > %.2f% > %.2f%   \n\n", a, c, b);

			}
		}
	}

	printf("\n\n\n");
	system("pause");
	return 0;
}
