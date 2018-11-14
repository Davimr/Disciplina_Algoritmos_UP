/*Dado um sistema de cadastro de alunos de um colégio que recebe o nome, a matrícula e as
quatro notas do aluno do semestre. Faça um programa em C que leia essas informações,
calcule a média e depois mostre a matrícula, o nome e a média do aluno. A leitura dessas
informações deverá ser feita enquanto o usuário informar uma matrícula diferente de 0 (zero).
IMPORTANTE:
1- O cálculo da média deve ser realizado por uma função denominada Calculo, que
recebe as 4 notas por parâmetro, e retorna a média.
2- A mensagem deve possuir o seguinte formato: “O aluno nome com matrícula
matricula tem media de média.
3- Essa mensagem deve ser enviada por uma função chamada mostra, que recebe o
nome, a matricula e a média por parâmetro
4- NÃO UTILIZAR VETORES.
5- o nome, a matrícula e as quatro notas do aluno do semestre devem ser variáveis
LOCAIS no Programa Principal. */

#include "stdlib.h"
#include "stdio.h"
#include "string.h"

float calculo(float p_nota1, float p_nota2, float p_nota3, float p_nota4);
void mostra(char p_nome[20], int p_matricula, float p_media);

int main() {

	char nome[20];
	int matricula = 0;
	float nota1 = 0.0, nota2 = 0.0, nota3 = 0.0, nota4 = 0.0, media = 0.0;

	printf("Digite o codigo de matricula do aluno: ");
	fflush(stdin);
	scanf_s("%d", &matricula);

	if (matricula != 0) {

		printf("\nDigite o nome do aluno: ");
		fflush(stdin);
		gets_s(nome);

		printf("\nDigite a nota 1 do aluno %s: ", nome);
		fflush(stdin);
		scanf_s("%f", &nota1);

		printf("\nDigite a nota 2 do aluno %s: ", nome);
		fflush(stdin);
		scanf_s("%f", &nota2);

		printf("\nDigite a nota 3 do aluno %s: ", nome);
		fflush(stdin);
		scanf_s("%f", &nota3);

		printf("\nDigite a nota 4 do aluno %s: ", nome);
		fflush(stdin);
		scanf_s("%f", &nota4);
	}

	while (matricula != 0) {

		media = calculo(nota1, nota2, nota3, nota4);
		mostra(nome, matricula, media);

		printf("\n\n\nDigite o codigo de matricula do proximo aluno: ");
		fflush(stdin);
		scanf_s("%d", &matricula);

		if (matricula != 0) {

			printf("\nDigite o nome do aluno: ");
			fflush(stdin);
			gets_s(nome);

			printf("\nDigite a nota 1 do aluno %s: ", nome);
			fflush(stdin);
			scanf_s("%f", &nota1);

			printf("\nDigite a nota 2 do aluno %s: ", nome);
			fflush(stdin);
			scanf_s("%f", &nota2);

			printf("\nDigite a nota 3 do aluno %s: ", nome);
			fflush(stdin);
			scanf_s("%f", &nota3);

			printf("\nDigite a nota 4 do aluno %s: ", nome);
			fflush(stdin);
			scanf_s("%f", &nota4);
		}
		else {
			break;
		}
	}

	printf("\n\nMatricula 0 saindo do programa...");

	printf("\n\n\n");
	system("pause");
	return 0;
}

float calculo(float p_nota1, float p_nota2, float p_nota3, float p_nota4){

	float p_media = 0.0;

	p_media = (p_nota1 + p_nota2 + p_nota3 + p_nota4) / 4;

	return p_media;
}

void mostra(char p_nome[20], int p_matricula, float p_media){

	printf("\n\nO aluno %s com matricula %d tem media %.2f", p_nome, p_matricula, p_media);
}