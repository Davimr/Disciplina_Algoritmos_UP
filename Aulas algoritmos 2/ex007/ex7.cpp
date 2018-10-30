#include <stdio.h>
#include <stdlib.h>

int main() {

	float saldo_inicial = 0.0, debitos = 0.0, creditos = 0.0, saldo_final = 0.0;

	printf("Digite o saldo inicial:\t");
	fflush(stdin);
	scanf_s("%f", &saldo_inicial);

	printf("\n\nDigite os debitos:\t");
	fflush(stdin);
	scanf_s("%f%", &debitos);

	printf("\n\nDigite os creditos:\t");
	fflush(stdin);
	scanf_s("%f", &creditos);

	saldo_final = (saldo_inicial - debitos) + creditos;

	if (saldo_final == 0) {
		printf("Saldo final eh zero");
	}
	else {
		if (saldo_final < 0) {
			printf("Saldo final negativo igual a %f%", saldo_final);
		}
		else {
			printf()