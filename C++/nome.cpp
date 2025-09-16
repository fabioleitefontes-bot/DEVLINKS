/*
	Name: vetnome
	Author: Fabio.Fonts 
	Date: 15/09/25 08:50
	Description: palindros
*/
 #include<windows.h>
 #include<stdio.h>
 #include<locale.h>
//protopotização
void imprimirVetorcontrario(char*, int );
int pegaTamanho(char*);
int lerNum();
main()
{
    setlocale(LC_ALL,"portuguese");
	char nome[50];
	puts("digite seu nome: ");
	gets(nome);
	int tam = pegaTamanho(nome); //sizeof(nome)/sizeof(char);//sizeof (*v) retorna um número em quantidades vezes 4 de byte, e size int divide por 4 para calcular a quantidade do vetor 5
	//involke da função
	puts("conteúdo reverso do vetor:");
	printf(" ");
	imprimirVetorcontrario(nome, tam);
}
int pegaTamanho(char*nome){
	int i;
	for(i = 0; nome[i] != '\0';i++){
	}
	return i;
}
void imprimirVetorcontrario(char*V, int tam)
{	
	for(int i = tam -1; i >= 0; i--){
		printf("[%c]", V[i]);
	}
}
