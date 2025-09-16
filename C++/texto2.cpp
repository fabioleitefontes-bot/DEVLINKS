/*
	Name: texto2.cpp
	Author: Fabio.Fonts 
	Date: 01/09/2025 08:21
	Description: progama para alteração de texto
*/

 #include<stdio.h>
 #include<locale.h>
 
 main()
 
 {
    setlocale(LC_ALL,"portuguese");
 	char nome[20];
 	int tam = 0;
 	printf("digite seu nome:"); gets(nome);
 	tam = sizeof(nome);
 	printf("\nvalor de tam: %d", tam);
 	printf("\n\nseu nome: %s\n", nome);
 	
 	int i = 0;
 	puts("conteúdo do vetor:");
 		for(i = 0; nome[i]!='\0'; i++)
 			printf("%c|", nome[i]);
 	
 } //fim do progama
