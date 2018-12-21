#include "stdio.h"
#include "stdlib.h"
#include "string.h"

struct empresa {
	int codigo;
	char nome[20];
	int ano_nasc;
	float salarios[12];
	float salario_anual;
};

int main() {

	struct empresa estagiario[60];
	int i = 0, x = 0;

	for (i = 0; i < 60; i++) {
		estagiario[i].codigo = 0;
		estagiario[i].ano_nasc = 0;
		estagiario[i].salario_anual = 0.0;
		for (x = 0; x < 12; x++) {

			estagiario[i].salarios[x] = 0.0;
		}
	}

	for (i = 0; i < 60; i++) {

		printf("Digite o codigo do estagiario: ");
		fflush(stdin);
		scanf_s("%d", &estagiario[i].codigo);

		printf("\nDigite o nome do estagiario %d: ", estagiario[i].codigo);
		fflush(stdin);
		gets_s(estagiario[i].nome);

		printf("\nDigite o ano de nascimento do estagiario %s: ", estagiario[i].nome);
		fflush(stdin);
		scanf_s("%d", &estagiario[i].ano_nasc);

		for (x = 0; x < 12; x++) {

			printf("\nDigite o salario %d do estagiario %d: ", x + 1, estagiario[i].codigo);
			fflush(stdin);
			scanf_s("%f", &estagiario[i].salarios[x]);

			estagiario[i].salario_anual += estagiario[i].salarios[x];
		}

		printf("\n\nEstagiario %d chamado %s nascido em %d com um salario anual de %.2f.", estagiario[i].codigo, estagiario[i].nome, estagiario[i].ano_nasc, estagiario[i].salario_anual);
		printf("\n\nCada salario de cada mes abaixo.\n");
		for (x = 0; x < 12; x++) {
			printf("\n%.2f", estagiario[i].salarios[x]);
		}
		printf("\n\n\n");

	}

	printf("\n\n\n");
	system("pause");
	return 0;
}






