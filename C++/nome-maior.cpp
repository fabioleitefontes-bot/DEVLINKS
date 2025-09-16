/*
	Name: maior/menor-S
	Author: Fabio.Fonts 
	Date: 15/09/25 08:50
	Description: programa que leia 2 string e faz um parametro de qual é maior, qual é menor, e até onde sera igual
*/
 #include<windows.h>
 #include<stdio.h>
 #include<locale.h>
 void imprimirMaior(int, int, char*, char*);
 void igualdade(int, int, char*, char*, char*);
 int pegaTamanho(char*);
 main()
 
 {
    setlocale(LC_ALL,"portuguese");
 	char nome[20];
 	char nome1[20];
 	char igualdade1[20] = {0};
 	
 	gets(nome1);
 	gets(nome);
 	int tam = pegaTamanho(nome);
 	int tam1 = pegaTamanho(nome1);
 	imprimirMaior(tam, tam1, nome, nome1);
 	puts("\naté onde elas são iguais");
 	igualdade(tam, tam1, nome, nome1, igualdade1);
 
 	
 } //fim do progama
 
 void imprimirMaior(int tam, int tam1, char *nome, char *nome1)
 {
 	puts("maior Nome");
 	if(tam>tam1){
 		for(int i =0; i < tam ; i++)
 			printf("[%c]", nome[i]);
	 }
 	else 
 		{
 			for(int i =0; i < tam1 ; i++)
 			printf("[%c]", nome1[i]);
		 }
}
	 void igualdade(int tam, int tam1, char* nome, char* nome1, char* igualdade1 ){
	 
	 	int tammaior = 0;
	 	if(tam>tam1)
	 		tammaior = tam;
	 	else 
		 	tammaior = tam1;	
	 	for(int i =0; i< tammaior; i++)
	 	{
	 		if(nome[i] == nome1[i])
	 			igualdade1[i] = nome[i];
	 		else
			 	break;	
				
		 }
	 	if(igualdade1[0] == '\0')
	 		printf("não há nada igual");
	 	else{
		 
	 	 for(int i = 0; igualdade1[i] != '\0'; i++)
	 	 	printf("[%c]", igualdade1[i]);
	}
		  }	 
		 
 int pegaTamanho(char*nome){
	int i;
	for(i = 0; nome[i] != '\0';i++){
	}
	return i;
}
