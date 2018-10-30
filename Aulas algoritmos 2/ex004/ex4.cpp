#include <stdio.h>
#include <stdlib.h>

int main() {

int tempo = 0;
float valor_compra = 0.0, desconto = 0.0;

	printf("Digite o tempo em anos que a pessoa eh cliente: \t");
	fflush(stdin);
	scanf_s("%d", &tempo);

	printf("\n\n Digite o valor da compra: \t");
	fflush(stdin);
	scanf_s("%f", &valor_compra);

	if (tempo > 5 && valor_compra > 1000) {
		desconto = valor_compra * 0.10;
		printf("\n\nO valor do desconto eh de %f% \n\n" , desconto);
	}
	else {
	    if (tempo > 5 && valor_compra > 5000) {
		    desconto = valor_compra * 0.20;
		    printf("\n\nO valor do desconto eh de %f% \n\n", desconto);
	    }
    }
system("pause");

}

