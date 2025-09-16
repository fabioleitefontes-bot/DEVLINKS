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
 	    float nota1, nota2, nota3, nota4; 
 		float media, percent, percAprov, somamedia, notaexame, percRep;
 		int i, aprovados, reprovados, qtdExame ;
 
 	nota1 = nota2 = nota3 = nota4 = 0.0;
 	media = somamedia = percent = percAprov = percRep = 0.0;
 	i = aprovados = reprovados = 0;
 	
 		while( i < 4)
		
		  
		
			
 			{ //inicio whilw
 			puts("=======");
 				printf ("digite a 1 nota:"); scanf("%f", &nota1);
 				printf ("digite a 2 nota:"); scanf("%f", &nota2);
 				printf ("digite a 3 nota:"); scanf("%f", &nota3);
 				printf ("digite a 4 nota:"); scanf("%f", &nota4);
 				
 				media= (nota1 + nota2 + nota3 + nota4)/4;
 				
 			if(media >= 6)
 			{
 				puts("aprovado \n");
 				aprovados++;
			 }
 			else if (media >=4,0)
 			     {
 			     	puts("você esta de exame \n");
 			     	qtdExame++;
 			     	somamedia = 12,0 - media; 
 			     	printf("nota necessaria pro exame: %.2f \n", notaexame);
				  }
 			else
 			{   
 			    puts("reprovado artista!\n");
 			    reprovados++;
			 }
 			i++;
			 }//fim do while
			 
		percAprov = aprovados / 7.0 * 100;
		percRep = reprovados / 7.0 * 100; 
		printf("quantidade de aprovado: %d - %.2f%% \n" , aprovados, percAprov);
		printf ( "quantidade repovados: %d -  %.2f%%  \n" , reprovados, percRep);	 
		printf ( " quantidade de alunos que farão exame: %d" , qtdExame);
 	
 } //fim do progama
 	
 	
 	
 	
 
