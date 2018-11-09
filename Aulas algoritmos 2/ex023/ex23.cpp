/*Crie uma função que determine se um numero inteiro recebido eh par ou impar e retorne o resultado ao programa principal.*/


#include "stdlib.h"
#include "stdio.h"

int fun_imp_par(int p_numero);

int main() {

	int result = 0, numero = 0;

	printf("Digite o numero: ");
	fflush(stdin);
	scanf_s("%d", &numero);

	result = fun_imp_par(numero);

	if (result == 0) {
		printf("\nO numero eh par.");
	}
	else {
		printf("\nO numero eh impar.");
	}

	printf("\n\n\n");
	system("pause");
	return 0;
}

int fun_imp_par(int p_numero){

	if (p_numero % 2 == 0){
		return 0;
	}
	else {
		return 1;
	}
}
