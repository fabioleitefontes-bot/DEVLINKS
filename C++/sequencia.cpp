/*
	Name: 
	Author: Fabio.Fontes 
	Date: 08/04/25 11:21
	Description: 
*/

 #include<stdio.h>
 #include<locale.h>
 
 main()
 
 {
setlocale(LC_ALL,"portuguese");
int num =0;
int seq =1;
int soma = 1;
int mult = 0;
int cont = 0;
	scanf("%d", &num);
	for(int i = 0 ; i < (num * 2) ; i++)
		{
			
			if(i %2==0)
				{
						soma = soma + cont ;
						mult = (seq) * soma;
						printf("%d %d %d\n", seq, soma, mult);
					cont++;
					
				}
			else
				{
				soma = soma + 1;
				mult = mult + 1;
				printf("%d %d %d\n", seq, soma, mult);
				seq ++;
				cont++;
			}
		
		}


		
			 
 	
 } //fim do progama
