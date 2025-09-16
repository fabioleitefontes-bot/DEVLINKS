/*
	Name: matrixvetor.cpp
	Author: Fabio.Fontes 
	Date: 27/05/2025 09:53
	Description: progama para fazer carga de uma matriz para um vetor de ordem definida pelo usuário
*/

 #include<stdio.h>
 #include<locale.h>
 
 main()
 
 {
 		setlocale(LC_ALL,"portuguese");
 	int i;
 	int j;
 	int x;
 	int ordem = 0;
 	 
 	 	printf("escolha a ordem da matriz quadrada:"); scanf("%d", &ordem);
 	 
 	 int  mat[ordem][ordem];
 	 int  vet[ordem*ordem];
 	 
 	 	puts("\ncarregando a matriz:");
 	 	puts("    |\n    v");
 	 	
 		printf("digite %d elementos inteiros:\n", ordem*ordem);
	 i =0;
	 j=0;
	 x =0;
		while(i<ordem)	  	
 {
 	
 			while(j<ordem)
 		{
 				printf("[%d][%d]:", i,j );
 				scanf("%d", &mat[i][j]);
 				j++;
		 }
			j=0;
			i++;
}	 
		puts("\n conteúdo da matriz:");
		puts("    |\n    v");
i = 0;

	 do
	{
			for(j=0; j<ordem;j++)
			{
				printf("[%d][%d]: %d\n", i,j, mat[i][j]);
				vet[x] = mat[i][j];
				x++;
			}
		 i++;
	
	}while(i<ordem);
	
		puts("\nmatriz p vetor:");
		puts("    |\n    v");
	x=0;
		
	 while(x<ordem*ordem)
	 {
		printf("[%d]", vet[x]);
		x++;
	 }	
 } //fim do progama
 	
