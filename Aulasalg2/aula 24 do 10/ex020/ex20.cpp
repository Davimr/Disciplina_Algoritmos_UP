#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main() {

	char nome[50];

	printf("Digite seu nome: ");
	fflush(stdin);
	gets_s(nome);

	printf("\n\n%s", nome);



	printf("\n\n");
	system("pause");
	return 0;
}