#include "pch.h"
#include <iostream>

int i = 0;
float a = 0.0, b = 0.0, c = 0.0;

int main(){

	printf("Digite o valor de i: \t");
	fflush(stdin);
	scanf_s("%d", &i);

	printf("Digite o valor de a: \t");
	fflush(stdin);
	scanf_s("%f", &a);

	printf("Digite o valor de b: \t");
	fflush(stdin);
	scanf_s("%f", &b);

	printf("Digite o valor de c: \t");
	fflush(stdin);
	scanf_s("%f", &c);

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

	system("pause");
}

