#include <stdio.h>
#include <stdlib.h>

int main() {

	int codigoS = 0, codigoB = 0;
	float preco = 0.0;

	printf("Digite o codigo do sanduiche: \t ");
	fflush(stdin);
	scanf_s("%d", &codigoS);

	printf("\n\nDigite o codigo da bebida: \t ");
	fflush(stdin);
	scanf_s("%d", &codigoB);



	switch (codigoS) {
	   case 100:
		   printf("\nCachorro quente \n");
		   preco = preco + 1.20;
		   break;
	   case 101:
		   printf("\nBauro simples \n");
		   preco = preco + 1.30;
		   break;
	   case 102:
		   printf("\nBauro com ovo \n");
		   preco = preco + 1.50;
		   break;
	   case 103:
		   printf("\nHamburguer \n");
		   preco = preco + 1.70;
		   break;

	   default:
		   printf("Codigo incorreto. \n\n");
		   break;
	}


	switch (codigoB) {
	   case 201:
		   printf("\nRefrigerante \n");
		   preco = preco + 1.20;
		   break;
	   case 202:
		   printf("\nSuco \n");
		   preco = preco + 1.50;
		   break;
	   case 203:
		   printf("\nAgua mineral \n");
		   preco = preco + 0.70;
		   break;
	   default:
		   printf("Codigo incorreto. \n\n");
		   break;
	}
	  


	printf("\n\nTotal a pagar %.2f \n\n", preco);





	system("pause");
}