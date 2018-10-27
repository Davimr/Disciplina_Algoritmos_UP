/*  Num certo município, vários proprietários de imóveis estão em atraso com o pagamento do IPTU. Faça um
programa em C para ler os dados do imóvel e imprimir o valor do IPTU com a multa a ser paga, considerando
os dados do imóvel: número de cadastro, valor do imposto e quantidade de meses em atraso. A multa é de R$
50,00 por mês de atraso. Todas essas informações, inclusive a multa, devem ser armazenadas em um registro. */


#include <stdio.h>
#include <stdlib.h>


struct iptu_casas {
	int cadastro;
	float imposto;
	int atraso;
	float multa;
};

int main() {



	struct iptu_casas iptu[50];
	int i, cont = 0;
	char resp;

	for (i= 0; i < 50; i ++) {

		printf("Digite o numero de cadastro do imovel %d: ", i);
		fflush(stdin);
		scanf_s("%d", &iptu[i].cadastro);

		printf("\nDigite o valor do imposto do imovel com cadastro %d: ", iptu[i].cadastro);
		fflush(stdin);
		scanf_s("%f", &iptu[i].imposto);

		printf("\nDigite a quantidade de meses em atraso do imovel com cadastro %d: ", iptu[i].cadastro);
		fflush(stdin);
		scanf_s("%d", &iptu[i].atraso);

		printf("\n\nDigite S ou s para continuar, ou outra tecla para sair. ");
		fflush(stdin);
		resp = getchar();
		if (resp == 's' || resp == 'S') {
			printf("\n\nProximo imovel.");
		}
		else {
			break;
		}
		
		cont = cont + 1;
		printf("\n\n\n");
	}


	for (i = 0; i <= cont; i++) {

		iptu[i].multa = iptu[i].atraso * 50.00;
		printf("\n\n\nA multa do imovel com cadastro %d eh %.2f.", iptu[i].cadastro, iptu[i].multa);
		printf("\nImovel %d com valor de imposto %.2f e com %d meses em atraso.", iptu[i].cadastro, iptu[i].imposto, iptu[i].atraso);
	}


    
	printf("\n\n\n\n");
	system("pause");
	return 0;
}