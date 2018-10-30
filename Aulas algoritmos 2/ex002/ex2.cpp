#include <stdio.h>
#include <stdlib.h>

int main() {

int matriculaum = 0, idadeum = 0, matriculadois = 0, idadedois = 0;

	printf("Digite o numero da matricula da primeira pessoa: " , "\n");
	fflush(stdin);
	scanf_s("%d", &matriculaum);
	printf("Digite a idade da primeira pessoa: " , "\n");
	fflush(stdin);
	scanf_s("%d", &idadeum);

	printf("Digite o numero da matricula da segunda pessoa: ", "\n" );
	fflush(stdin);
	scanf_s("%d", &matriculadois);
	printf("Digite a idade da segunda pessoa: ",  "\n" );
	fflush(stdin);
	scanf_s("%d", &idadedois);

	if (idadeum > idadedois) {
		printf("\nA pessoa com a matricula %d eh mais velha. \n\n", matriculaum);
	}
	else {
		printf("\nA pessoa com a matricula %d eh mais velha. \n\n" , matriculadois);
	}


	system("pause");

}




