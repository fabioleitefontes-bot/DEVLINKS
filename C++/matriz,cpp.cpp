/*
	Name: matriz1.cpp
	Author: Fabio.Fontes 
	Date: 20/05/25 11:21
	Description: progama para demonstrar operações com matrizes (Array bidimensionais) 
*/

 #include<stdio.h>
 #include<locale.h>
 
 main()
 
{ //início do progama

 setlocale(LC_ALL,"portuguese");
	int mat [3] [3];  // 3 linhas e 3 colunas 		
 	 int i, j;
	i = j = 0; 
	int soma = 0;
	 	
// conjuto de laço de repição para preenchimento em linha
		 	
do 
{
		do{
	printf("digite o [%d][%d] elemento:", i,j);
		scanf("%d", &mat[i][j]);
	j++;
		  }while(j<3);
	j =0;
	i++;
	
	
}while(i<3);	

	puts("\nmatriz loaded");			
	puts("\n----");
	puts("\ndiagonal principal");

 for(i=0; i<3; i++)
	for(j=0;j<3;j++)		
			if(i==j)
				{
					printf("[%d] [%d] = %d\n", i,j, mat[i][j]);
			    	soma = soma + mat [i][j];}	
		
printf("\n a soma dos elementos é: %d", soma);	
	puts("\ndiagonal secundária:");
i=0;
j=0;
soma=0;	
	 while(i<3){
	 
		while(j<3){
				
				if(i + j == 2 )
					{
					printf("[%d] [%d] = %d\n", i,j, mat[i][j]);
			    	soma = soma + mat [i][j];}
			    	j++;
		}
		

	j=0;
	i++;
}
	printf("\n a soma dos elementos é: %d", soma);	
i=0;
j=0;
soma = 0;
		puts("\n\nacima da diagonal primcipal:");
	
do{

		do{
			
			if(i < j )
				{
					printf("[%d] [%d] = %d\n", i,j, mat[i][j]);
			    	soma = soma + mat [i][j];}
			j++;		
		}while(j<3);
	j=0;
	i++;	
}while (i<3);
 printf("\n a soma dos elementos é: %d", soma);
 
i=0;
j=0;
soma= 0;

	puts("\nabaixo da diagonal primcipal:\n");
	
do{

		do{
			
			if(i > j )
				{
					printf("[%d] [%d] = %d\n", i,j, mat[i][j]);
			    	soma = soma + mat [i][j];}	
			j++;		
		}while(j<3);
	j=0;
	i++;	
}while (i<3);	
printf("\n a soma dos elementos é: %d", soma);	 
j=0;		
soma=0;		
	puts("\n acima da diagonal secundária:");
	
	 for(i=0; i<3; i++){
	
		do{
					
			if((i + j) < (3 -1))
			{
					printf("[%d] [%d] = %d\n", i,j, mat[i][j]);
			    	soma = soma + mat [i][j];}	
			j++;	
		}while(j<3);
	j=0;	
}

 printf("\n a soma dos elementos é: %d", soma);
 soma=0;
 j=0;
		puts("\n abaixo da diagonal secundária:");
	
	 for(i=0; i<3; i++){
	 
		while(j<3){
				
			if((i + j) >= 3)
				{
					printf("[%d] [%d] = %d\n", i,j, mat[i][j]);
			    	soma = soma + mat [i][j];}	
			j++;
	}
j=0;	

}
printf("\n a soma dos elementos é: %d", soma);
	puts("\nconteúdo do vetor:");		
		 		 
i=0;	
 	while(i<3)
 {
 	while(j<3)
 	{
 		printf("[%d]", mat[i][j]);
 		j++;
	 }
	j=0;
		i++; 
 }

 } //fim do progama
