/*
	Name: texto.3
	Author: Fabio.Fonts 
	Date: 01/09/25 08:50
	Description: palindros
*/

 #include<stdio.h>
 #include<locale.h>
 
 main()
 
 {
    setlocale(LC_ALL,"portuguese");
 	char palavra[20];
 	printf("digite sua palavra:\n");
 	gets(palavra);
 	int fim= 0;
 	int j;
 	int flag;
 	
 	for(int i = 0; palavra[i] != '\0'; i++)
 		fim++;
 		
 	j = fim -1;
	flag = 1; 	
 	 for(int i = 0;  i < j; i++) 	
		{
			if(palavra[i] != palavra[j])
				{
				flag = 0;
				break;
			}
			j--;	
		}

 	if( flag == 1)
 		printf("\n é um palindromo");
 	else
	 	printf("\n não é um palindromo");	
 } //fim do progama
