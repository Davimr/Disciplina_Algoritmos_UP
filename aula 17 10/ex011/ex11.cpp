#include <stdio.h>
#include <stdlib.h>

int main() {

	int cont = 0, idade = 0;
	float media_idade = 0.0;

	for (cont = 1; cont <= 25; cont++){
		printf("\n\nDigite a idade da crianca: %d \t", cont);
		fflush(stdin);
		scanf_s("%d", &idade);
		media_idade = media_idade + idade;
	}

	media_idade = media_idade / 25;
	printf("\n\n\n A media de idade eh: %.2f \n\n\n", media_idade);

	system("pause");

}