/*
	Name: indiano.cpp
	Author: Fabio.Fonts 
	Date: 01/09/25 08:50
	Description: código indiano
*/

 #include<stdio.h>
 #include<locale.h>
 
 main()
 
 {
char nome[25];
char cpf[11];
char cripto[65]; 
char RG[9]; 
char docs[21];
char crypto[40];
int c = 0;
int d =0;

	puts("PROGAMA PARA CRYPTOGRAFAR DADOS PESSOAIS\n");
 	puts("-----------------------------------------\n");
 	printf("nome completo:"); gets(nome);
 	printf("\nCPF:"); scanf("%s", cpf);
 	printf("\nRG:"); scanf("%s", RG);
 	
 	puts("imprimindo vetor docs");
 	puts("-----------------------------------------\n");
 	
 for(int i=0; i<21; i++)
 	{
		 docs[d] = cpf[i];
 		 docs[d+1] = RG[i];
 		 d = d+2;
 	 }
 	 puts("cpf e RG");
 	 
	for (int i = 0; i<21; i++)
	{
	printf("|%c|", docs[i]);
}
puts("\ncrypto:\n");

for(int i=0; nome[i] != '\0'; i++)
 	{
		 docs[c] = nome[i];
 		 docs[c+1] = docs[i];
 		 c = c+2;
 	 }
 	 for (int i = 0; crypto[i] != '\0'; i++)
printf("|%s|", crypto[i]);
 	
 	
 } //fim do progama
