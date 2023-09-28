#include <stdio.h>
#include <stdlib.h>

void printMatriz(int m[][100],int linhas,int cols){
	int i,j;
	for(i=0;i<linhas;i++){
		printf(" Dia: %i |",i+1);
		for(j=0;j<cols;j++)
		   printf("%3d |",m[i][j]);
	  printf("\n");	   
	}// fim for i
	printf("\n");
} //  fim print

void geraMatriz(int m[][100],int linhas,int cols){
	int i,j;
	srand(time(NULL));
	for(i=0;i<linhas;i++)
		for(j=0;j<cols;j++)
		   m[i][j]=rand()%50;
} //  fim gera

void leiaMatriz(int m[][100],int linhas,int cols){
	int i,j;
	srand(time(NULL));
	for(i=0;i<linhas;i++)
		for(j=0;j<cols;j++)
		   scanf("%d",&m[i][j]);
} //  fim gera

void leiaMatrizArquivo(int m[][100],int linhas,int cols){
	FILE *arq;
	int i,j;
	arq= fopen("temperaturas.txt","r");
	if(arq==NULL)
	   printf("Arquivo nao encontrado\n");
	for(i=0;i<linhas;i++){
	   for(j=0;j<cols;j++){
              fscanf(arq,"%d",&m[i][j]); 
		}// fim for j
	}// fim for i     
}// fim le





