#include "stdio.h"
#include "stdlib.h"
#include "locale.h"

int main() {

	setlocale(LC_ALL, "");

	int presidente = 0, governador = 0;

	printf("Digite o numero do candidato(a) a presidencia:\t");
	fflush(stdin);
	scanf_s("%d", &presidente);

	switch (presidente) {
	case 19:
		printf("\n\nAlvaro Dias (Podemos)");
		break;
	case 51:
		printf("\n\nCabo Daciolo (Patriota)");
		break;
	case 12:
		printf("\n\nCiro Gomes (PDT)");
		break;
	case 27:
		printf("\n\nEymael(DC)");
		break;
	case 13:
		printf("\n\nFernando Haddad (PT)");
		break;
	case 45:
		printf("\n\nGeraldo Alckmin (PSDB)");
		break;
	case 50:
		printf("\n\nGuilherme Boulos (PSol)");
		break;
	case 15:
		printf("\n\nHenrique Meirelles (MDB)");
		break;
	case 17:
		printf("\n\nJair Bolsonaro (PSL)");
		break;
	case 30:
		printf("\n\nJoão Amoêdo (Novo)");
		break;
	case 54:
		printf("\n\nJoão Vicente Goulart (PPL)");
		break;
	case 18:
		printf("\n\nMarina Silva (Rede)");
		break;
	case 16:
		printf("\n\nVera Lúcia (PSTU)");
		break;
	default:
		printf("\n\nCandidato invalido.");

	}

	printf("\n\n-------------------------------------------------------------------------------");

	printf("\n\nDigite o numero do candidato(a) a governador(a):\t");
	fflush(stdin);
	scanf_s("%d", &governador);

	switch (governador) {
	case 11:
		printf("\n\nCida Borghetti (Progressista)");
		break;
	case 13:
		printf("\n\nDoutor Rosinha (PT)");
		break;
	case 28:
		printf("\n\nGeonísio Marinho (PRTB)");
		break;
	case 15:
		printf("\n\nJoão Arruda (MDB)");
		break;
	case 18:
		printf("\n\nJorge Bernardi (Rede)");
		break;
	case 17:
		printf("\n\nOgier Buchi (PSL)");
		break;
	case 29:
		printf("\n\nPriscila Ebara (PCO)");
		break;
	case 16:
		printf("\n\nProfessor Ivan Bernardo (PSTU)");
		break;
	case 50:
		printf("\n\nProfessor Piva (PSOL)");
		break;
	case 55:
		printf("\n\nRatinho Junior (PSD)");
		break;
	default:
		printf("\n\nCandidato invalido.");
	}

	printf("\n\n\n");
	system("pause");
	return 0;
}