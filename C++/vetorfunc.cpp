/*
	Name: vetor.func
	Author: Fabio.Fonts 
	Date: 15/09/25 08:50
	Description: fun��o para tratamento de vetores
*/
 #include<windows.h>
 #include<stdio.h>
 #include<locale.h>
 
//protopotiza��o
void imprimirVetorcontrario(int*, int );
void imprimirVetor(int*, int);
int lerNum();
 main()
 
 {
 	
    setlocale(LC_ALL,"portuguese");
 	int vet[5];
 	int tam = sizeof(vet)/sizeof(int);//sizeof (*v) retorna um n�mero em quantidades vezes 4 de byte, e size int divide por 4 para calcular a quantidade do vetor
 		
 	for(int i =0; i<tam; i++)
 		vet[i] = lerNum();

 	//involke da fun��o
 	puts("conte�do do vetor");
 	printf(" ");
 	imprimirVetor(vet, tam); //por ser vetor ele n�o precisa do &
 	printf("\nconte�do do vetor ao contr�rio: \n");
 	printf(" ");
 	imprimirVetorcontrario(vet, tam);	
	 
 } //fim do progama
 int lerNum()
 {
 	
 	int num;
 	printf("digite um n�mero");
 	scanf("%d", &num);
 	return num;
 	
 
 }
 
 void imprimirVetor(int*V, int tam)
 {
 	
 		for(int i =0; i< tam; i++)
 			printf("[%d]", V[i]);
 }
 void imprimirVetorcontrario(int*V, int tam)
 {
 	for(int i = tam -1; i >= 0; i--)
 			printf("[%d]", V[i]);
 }
