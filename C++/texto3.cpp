/*
	Name: texto3.cpp
	Author: Fabio.fontes
	Date: 08/09/25 10:41
	Description: programa que demonstra o uso de ponteiros no tratamento de string
*/
#include<stdio.h>
#include<string.h>
 
 
void inverso(char[20]);
main()
{
	char nome[20]; int tam =0;
	printf("Nome: ");
	gets(nome);
	tam = sizeof(nome)/ sizeof(char);
	printf("\ntamanho do vetor: %d \n", tam);
	printf("Nome digitado: %s\n", nome);
	puts("nome inverso\n");
	inverso(nome);
	printf(nome);
	//for(int i =0; ){}
}//fim do programa
 
void inverso(char nome[20])
{	int i;
	for(i = 0; nome[i] != '\0'; i++){}
	while(i>=0){
		printf("%c",nome[i]);
		i--;
	}
	printf("\n");
}
