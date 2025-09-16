/*
	Name: cripto.cpp
	Author: Fabio.Fonts 
	Date: 03/06/2025 09:50
	Description: progama para pegar rg e cpf e fazer uma criptografia junto com o nome do usuário
*/

 #include<stdio.h>
 #include<locale.h>
 
 main()
 
 {
 	 setlocale(LC_ALL,"portuguese");
char nome[25];
char cpf[11];
char cripto[65]; 
char RG[9]; 
char docs[24];
int c = 0;
int d =0;
		
 	puts("PROGAMA PARA CRYPTOGRAFAR DADOS PESSOAIS\n");
 	puts("-----------------------------------------\n");
 	printf("nome completo:"); gets(nome);
 	printf("CPF:"); gets(cpf);
 	printf("RG:"); gets(RG);
 	
 	printf("\nnome[6]: %c\n", nome[6]); printf("CPF:%s\n", cpf); printf("RG:%s", RG); printf("\n\n|%s | %s | %s |", nome, cpf, RG);
 	
 	puts("\nimprimindo o Nome caractere por caracter\n");
 	for(int i=0; nome[i]!='\0'; i++)
		printf("%c|", nome[i]);
		
	puts("\nimprimindo o CP caractere por caracter\n");
	for(int i=0; cpf[i]!='\0'; i++)
		printf("%c|", cpf[i]);
		
	puts("\nimprimindo o RG caractere por caracter\n");	
	for(int i=0; RG[i]!='\0'; i++)
		printf("%c|", RG[i]);	
					
	 puts("\n\n     (Marshaling)\n");				
 //fazendo o marshaling
 
 	for(int i=0; i<24; i++)
 	{
		 docs[d] = cpf[i];
 		 docs[d+1] = RG[i];
 		 d = d+2;
 	 }
 	
	 puts("   \nvetor docs");
	 for(int i=0; i<24; i++)
		printf("%c|", docs[i]);
	  
 	for(int i=0; i<65; i++)
 	{
		cripto[c] = nome[i];
 		cripto[c+1] = docs[i];
 		c = c+2;
 	 }
 	 puts("\nCripto\n");
 	 for(int i=0; i<65; i++)
		printf("%c|", cripto[i]);	
 	
 	
 } //fim do progama
