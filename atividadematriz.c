#include<stdio.h>
#include<stdlib.h>
#include"matrizLib.h"
#include<limits.h> // biblioteca do INT Max

// atividade 3, prática de matriz

int main(){
	
	
	int temperatura[100][100], maiortemp = INT_MIN, menortemp = INT_MAX;
	int somamax = 0,somamin = 0,soma, mediamax, mediamin,qtd,amplitude;
	int i,j,linhas,colunas,elemento;
	
	// visual do programa
	printf("       Temperatura\n         Max  Min\n");

	linhas = 31;
	colunas = 2;
	
	// lendo a matriz
	
	leiaMatrizArquivo(temperatura,linhas,colunas);
	printMatriz(temperatura,linhas,colunas);
	
	// pegando as linhas i coluna 0 \ Temperatura maxima
	for (i = 0; i < linhas ; ++i){
		somamax += temperatura[i][0];
	}

	// pegando as linhas i coluna 1 | Temperatura minima
	for (i = 0; i < linhas ; ++i){
		somamin += temperatura[i][1];
	}
	
	// pegando o numero de dias em que a temp ficou abaixo de 10°C.
	for (i = 0; i < linhas ; ++i){
		if (temperatura[i][1] <= 10)
			qtd = qtd + 1;
	
	}

	// buscando o maior valor para amplitude
	for (i = 0; i < linhas ; ++i){
		for (j = 0; j < colunas; j++){
			if(temperatura[i][j] > maiortemp){
				maiortemp = temperatura[i][j];
			}
		}		
}

	// buscando o menor valor para amplitude
	for (i = 0; i < linhas ; ++i){
		for (j = 0; j < colunas; j++){
			if(temperatura[i][j] < menortemp){
				menortemp = temperatura[i][j];
			}
		}		
}
	
	
	mediamax = somamax / linhas;
	mediamin = somamin/ linhas;
	
	amplitude = maiortemp - menortemp; // Encontramos a maior amplitude termica = 26.
	
	//printf("%i\n",temperatura[1][1]);
	
	printf("A temperatura media max do mes: %i graus\n",mediamax);
	printf("A temperatura media min do mes: %i graus \n",mediamin);
	printf("Maior amplitude termica:%i graus\n",amplitude);
	printf("numero de dias em que a temperatura minima ficou abaixo de 10 graus: %i dias\n",qtd);
	
	system("PAUSE");
	return 0;
}
