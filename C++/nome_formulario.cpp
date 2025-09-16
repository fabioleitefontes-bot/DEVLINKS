/*
	Name: nome no formúlario
	Author: Fabio.Fonts 
	Date: 02/09/25 08:50
	Description: testando limite de caracteres
*/
 
 #include<stdio.h>
 #include<locale.h>
 #include <string.h>

 
 main()
 
 {
    setlocale(LC_ALL,"portuguese");
 	char nome[500];

 	fgets(nome,sizeof(nome), stdin);
 	nome[strcspn(nome, "\n")] = '\0';

 	if(strlen(nome) < 81)
 		printf("YES\n");
 		else 	
 			printf("NO\n");
 } //fim do progama
