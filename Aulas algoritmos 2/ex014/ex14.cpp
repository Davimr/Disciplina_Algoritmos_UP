#include <stdio.h>
#include <stdlib.h>

int main() {

	int cont = 0;
	float altura = 0.1;
	char sexo;

	while (altura > 0.0) {

		printf("Digite sua altura ou zero para sair:\t");
		fflush(stdin);
		scanf_s("%f", &altura);

		if (altura == 0) {
			break;
		}

		printf("\n\nDigite seu sexo:\t");
		fflush(stdin);
		scanf_s(" %c", &sexo, 1);


		switch (sexo) {
		case 'M':
			printf("\n\n\nSeu peso ideal eh: %.2f", (72.7*altura) - 58);
			break;
		case 'F':
			printf("\n\n\nSeu peso ideal eh: %.2f", (62.1*altura) - 44.7);
			break;
		}

		printf("\n\n\n________________________________________________________________________________\n\n");
		cont = cont + 1;


		}


	printf("\n\n\n");
	system("pause");

}
