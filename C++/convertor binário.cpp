/*
	Name: conversorbinário
	Author: Fabio.Fontes 
	Date: 27/05/25 11:35
	Description: progama para converter de decimal para binário
*/

 #include<stdio.h>
 #include<locale.h>
 
 main()
 
 {
 	setlocale(LC_ALL,"portuguese");
 	
 		int vet[32];
 		int i, resto, quo, num, cont;
		 i = resto = num = quo = cont = 0;
		
	printf("digite o número desejado para converter para binário: (32bits)"); scanf("%d", &num);
		
	do
	{
		printf("%d,", num);
		quo = num/2;
		resto = num - (quo*2);
		vet[i] = resto;
		num = quo;
		i++;
	}while(num >= 2);
	
	cont = 32 - i;
	
	vet[i] = num;
	
		puts("\n vetor original:");
		puts("    |\n    ");
	
	for(i=0; i <= 32 - cont; i++)
		printf("%d|", vet[i]);
		
			puts("\n\n vetor binário:");
		puts("    |\n    v");
	
	for (int j = i - 1; j >= 0; j--)
	{
		printf("%d", vet[j]);
	}
	
		 
		 
		 
		 
		 
		 
		 
		 
		  
 } //fim do progama
 	
 	
 	
 	
 
