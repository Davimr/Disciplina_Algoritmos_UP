// utauladouglas.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>

// variaveis globais (ocupam memoria o tempo inteiro)
int a; // inteiro
float b; // real (pouca e media precisao)
double c; // real (muita precisão muitas casas decimais)

int main()
{
    // variaveis locais (soh ocupam memoria quando a funcao esta em execucao, SOH EXISTEM DENTRO DE ONDE FORAM CRIADAS)
	char d; // caractere
	bool e; // booleano (true/false)

    printf ("Hello World!\n\n");  //    \n pula uma linha     \t da um espaco
	
	printf("Moestrando o valor %i \n", 5);   //   % + a inicial do tipo de valor que sera mostrado

	scanf_s("%i", &a);  //  para ler precisa ser dito o tipo de dado que vai chegar virgula ***&*** nome da variavel
}

// system("pause");  <- pausa a execuçao ate que seja pressionada uma tecla
// compilar verifica se tem erros de sintaxe no seu codigo mas nao executa ( ctrl + shift + b)