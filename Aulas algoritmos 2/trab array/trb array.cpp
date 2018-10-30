#include "stdio.h"
#include "stdlib.h"

int main() {

	char resp = 'p';
	int presidente[15] = { 0 }, governador[12] = { 0 }, votop = 0, votog = 0, novop = 0, novog = 0, i = 0, x;


	printf("Digite S para comecar a votar: ");
	fflush(stdin);
	resp = getchar();


	do {

		printf("\n\nLista dos candidatos a presidencia:\nBranco: 0\nAlvaro Dias(Podemos) : 1\nCabo Daciolo(Patriota) : 2\nCiro Gomes(PDT) : 3\nEymael(DC) : 4\nFernando Haddad(PT) : 5\nGeraldo Alckmin(PSDB) : 6\nGuilherme Boulos(PSol) : 7\nHenrique Meirelles(MDB) : 7\nJair Bolsonaro(PSL) : 9\nJoão Amoêdo(Novo) : 10\nJoão Vicente Goulart(PPL) : 11\nMarina Silva(Rede) : 12\nVera Lúcia(PSTU) : 13\nNULO : 14\n ");

		printf("\n\nDigite o numero para presidente: ");
		fflush(stdin);
		scanf_s("%d", &votop);
		if (votop > 14 || votop < 0) {
			printf("\nNumero invalido\n");
			break;
		}

		i = votop;

		presidente[i] = presidente[i] + 1;

		printf("\n\nLista dos candidatos a governador:\nBranco: 0\nCida Borghetti(Progressista): 1\nDoutor Rosinha(PT): 2\nGeonísio Marinho(PRTB): 3\nJoão Arruda(MDB): 4\nJorge Bernardi(Rede): 5\nOgier Buchi(PSL): 6\nPriscila Ebara(PCO): 7\nProfessor Ivan Bernardo(PSTU):8\nProfessor Piva (PSOL): 9\nRatinho Junior (PSD): 10\nNULO: 11\n ");

		printf("\n\nDigite o numero para gorvernador: ");
		fflush(stdin);
		scanf_s("%d", &votog);
		if (votog > 11 || votog < 0) {
			printf("\nNumero invalido\n");
			break;
		}

		i = votog;

		governador[i] = governador[i] + 1;

		printf("\n\n\nObrigado por votar.\n\n\n");

		printf("Digite S para continuar votando ou N para ver a apuracao dos votos e sair. ");
		fflush(stdin);
		resp = getchar();
		while (resp == '\n')
			resp = getchar();

	} while (resp == 'S' || resp == 's');

	printf("\n\n");

	printf("\nVotos em branco:%d", presidente[0]);
	printf("\nVotos no Alvaro Dias:%d", presidente[1]);
	printf("\nVotos no Cabo Daciolo:%d", presidente[2]);
	printf("\nVotos no Ciro Gomes:%d", presidente[3]);
	printf("\nVotos no Eymael:%d", presidente[4]);
	printf("\nVotos no Fernado Hadad:%d", presidente[5]);
	printf("\nVotos no Geraldo Alckmin:%d", presidente[6]);
	printf("\nVotos no Guilherme Boulos:%d", presidente[7]);
	printf("\nVotos no Henrique Meirelles:%d", presidente[8]);
    printf("\nVotos no Jair Bolsonaro:%d", presidente[9]);
	printf("\nVotos no João Amoêdo:%d", presidente[10]);
	printf("\nVotos no João Vicente Goulart:%d", presidente[11]);
	printf("\nVotos na Marina Silva:%d", presidente[12]);
	printf("\nVotos na Vera Lúcia:%d", presidente[13]);
	printf("\nVotos NULOS:%d", presidente[14]);

	printf("\n\n");

	printf("\nVotos em branco:%d", governador[0]);
	printf("\nVotos na Cida Borghetti:%d", governador[1]);
	printf("\nVotos no Doutor Rosinha:%d", governador[2]);
	printf("\nVotos no Geonísio Marinho:%d", governador[3]);
	printf("\nVotos no João Arruda:%d", governador[4]);
	printf("\nVotos no Jorge Bernardi:%d", governador[5]);
	printf("\nVotos no Ogier Buchi:%d", governador[6]);
	printf("\nVotos no Priscila Ebara:%d", governador[7]);
	printf("\nVotos no Professor Ivan Bernardo:%d", governador[8]);
	printf("\nVotos no Professor Piva:%d", governador[9]);
	printf("\nVotos no Ratinho Junior:%d", governador[10]);
	printf("\nVotos NULOS:%d", governador[11]);

	for (x = 0; x < 15; x++) {
		if (presidente[x] > novop) {
			novop = x;
		}
	}

	for (x = 0; x < 12; x++) {
		if (governador[x] > novog) {
			novog = x;
		}
	}

	printf("\n\n");

	switch (novop) {
	case 0:
		printf("\nNovo presidente foi voto em branco.");
		break;
	case 1:
		printf("\nNovo presidente eh Alvaro Dias.");
		break;
	case 2:
		printf("\nNovo presidente eh Cabo Daciolo.");
		break;
	case 3:
		printf("\nNovo presidente eh Ciro Gomes.");
		break;
	case 4:
		printf("\nNovo presidente eh Eymael.");
		break;
	case 5:
		printf("\nNovo presidente eh Fernado Hadad.");
		break;
	case 6:
		printf("\nNovo presidente eh Geraldo Alckmin.");
		break;
	case 7:
		printf("\nNovo presidente eh Guilherme Boulos.");
		break;
	case 8:
		printf("\nNovo presidente eh Henrique Meirelles.");
		break;
	case 9:
		printf("\nNovo presidente eh Jair Bolsonaro.");
		break;
	case 10:
		printf("\nNovo presidente eh João Amoêdo.");
		break;
	case 11:
		printf("\nNovo presidente eh João Vicente Goulart.");
		break;
	case 12:
		printf("\nNova presidenta eh Marina Silva.");
		break;
	case 13:
		printf("\nNova presidenta eh Vera Lúcia.");
		break;
	case 14:
		printf("\nNovo presidente foi votado em NULO.");
		break;
	}

	printf("\n");

	switch (novog) {
	case 0:
		printf("\nNovo governador foi voto em branco.");
		break;
	case 1:
		printf("\nNova governadora eh Cida Borghetti.");
		break;
	case 2:
		printf("\nNovo governador eh Doutor Rosinha.");
		break;
	case 3:
		printf("\nNovo governador eh Geonísio Marinho.");
		break;
	case 4:
		printf("\nNovo governador eh João Arruda.");
		break;
	case 5:
		printf("\nNovo governador eh Jorge Bernardi.");
		break;
	case 6:
		printf("\nNovo governador eh Ogier Buchi.");
		break;
	case 7:
		printf("\nNova governadora eh Priscila Ebara.");
		break;
	case 8:
		printf("\nNovo governador eh Professor Ivan Bernardo.");
		break;
	case 9:
		printf("\nNovo governador eh Professor Piva.");
		break;
	case 10:
		printf("\nNovo governador eh Ratinho Junior.");
		break;
	case 11:
		printf("\nNovo governador foi votado NULO.");
		break;

	}

	printf("\n\n\n");
	system("pause");
	return 0;
}