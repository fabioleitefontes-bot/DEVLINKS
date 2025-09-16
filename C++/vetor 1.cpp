
/*
	Name: vetor
	Author: Fabio.Fontes
	Date: 06/05/25 09:49
	Description: vetor com 10 numeros
*/

#include<stdio.h>
#include <locale.h>
main()
{
setlocale(LC_ALL,"portuguese");	
	int  vet[8]; // DECLARAÇÃO DO VETOR COM 10 POSIÇÕES
	int  i =  0; // DECLARAÇÃO DA VARIÁVEL DE ITERAÇÃO (ÌNDICE DO VETOR)
	int soma = 0;	
	int somaimp = 0;
	int ii =0;
	int tam =0;
	tam= sizeof(vet)/sizeof(int);
	printf("tamanho do vet%d:\n\n", tam);
		while(i < tam)
		{
			
			printf("digite o %dº inteiro:", i+1);
			scanf("%d", &vet[i]);
			soma = vet[i] + soma;
			i++;
		}
	
				puts("\nvetor carregado com sucesso:");
			
				//exibindo conteudo do vetor
			
				puts("conteudo do vetor: ");
					for(i = 0; i < tam; i++)		
				{
				printf( "|%d;|", vet[i]);
				}
	
				// exibindo todo conteudo
	i=tam -1;
				puts("\nvetor ao contrário:");
				puts("-----");
					do
					{
						printf( "|%d;|", vet[i]);
						i--;
					}while(i>=0);
				
			puts("\n números pares:");
			puts("------");
				i=0;
				while(vet[i] <tam)
				{
					if(vet[i] %2 == 0 )
						printf("%d|", vet[i]);
					i++;					
				}
				
				i=0;
				ii=tam
				;
				puts("\nnúmeros impares:");
					while(i < tam)
					{
						if(vet[i] %2 == 1 )
							printf("%d|", vet[i]);
						else
							ii--;
							
					i++;
					}
					i=0;
					while(i <tam)
					{
						if(vet[i] %2 == 1 )
						somaimp= vet[i] + somaimp;
						i++;
					}
							
				printf("\nsoma de todos os elementos:%d", soma);
				printf("\nsoma dos impares:%d", somaimp);
				printf("\n média de numéros impares:%d", somaimp / ii);
				
						
						
					
} //fim do progama
