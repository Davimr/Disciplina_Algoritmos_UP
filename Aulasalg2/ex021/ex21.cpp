#include <stdio.h>
#include <stdlib.h>
#include <string.h>



struct ficha_aluno {
	int codigo;
	char nome[50];
	int telefone;
	char email[50];
};


int main() {

	struct ficha_aluno aluno;
	
	printf("Informe o codigo do aluno: ");
	fflush(stdin);
	scanf_s("%d", &aluno.codigo);

	printf("\nInforme o nome do aluno: ");
	fflush(stdin);
	gets_s(aluno.nome);

	printf("\nInforme o telefone do aluno: ");
	fflush(stdin);
	scanf_s("%d", &aluno.telefone);

	printf("\nInforme o email do aluno: ");
	fflush(stdin);
	gets_s(aluno.email);

	printf("\n\n\n");

	printf("\n\n%d", aluno.codigo);
	printf("\n\n%s", aluno.nome);
	printf("\n\n%d", aluno.telefone);
	printf("\n\n%s", aluno.email);



	printf("\n\n");
	system("pause");
	return 0;
}