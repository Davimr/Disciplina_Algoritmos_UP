#include "stdio.h"
#include "stdlib.h"

int main() {

	int codigo = 0, idade = 0, cont_a = 0, cont_e = 0, i = 0;
    float notas = 0.0, media = 0.0;
	char conceito;

	printf("Digite o codigo do aluno: ");
	fflush(stdin);
	scanf_s("%d", &codigo);

	while (codigo != 0) {

		printf("\nDigite a idade do aluno %d: ", codigo);
		fflush(stdin);
		scanf_s("%d", &idade);

		for (i = 0; i < 12; i++) {
			
			printf("\nDigite a nota %d do aluno %d: ", i, codigo);
			fflush(stdin);
			scanf_s("%f", &notas);

			media = media + notas;
		}

		media = media / 12;

		if (media < 40) {
			conceito = 'E';
			cont_e = cont_e + 1;
		}

		if (media >= 40 & media < 60) {
			conceito = 'D';
		}

		if (media >= 60 & media < 75) {
			conceito = 'C';
		}

		if (media >= 75 & media < 90) {
			conceito = 'B';
		}

		if (media >= 90) {
			conceito = 'A';
			cont_a = cont_a + 1;
		}

		printf("\n\nO aluno %d teve a media %.2f com conceito %c.", codigo, media, conceito);

		printf("\n\n\nDigite o codigo do proximo aluno ou zero para sair: ");
		fflush(stdin);
		scanf_s("%d", &codigo);
		
	}

	printf("\n\n%d alunos tiveram conceito A e %d alunos tiveram conceito E.", cont_a, cont_e);

	printf("\n\n\n");
	system("pause");
	return 0;
}