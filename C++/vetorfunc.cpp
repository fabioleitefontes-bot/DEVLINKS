/*
	Name: vetor.func
	Author: Fabio.Fonts 
	Date: 15/09/25 08:50
	Description: função para tratamento de vetores
*/
 #include<windows.h>
 #include<stdio.h>
 #include<locale.h>
 
//protopotização
void imprimirVetorcontrario(int*, int );
void imprimirVetor(int*, int);
int lerNum();
 main()
 
 {
 	
    setlocale(LC_ALL,"portuguese");
 	int vet[5];
 	int tam = sizeof(vet)/sizeof(int);//sizeof (*v) retorna um número em quantidades vezes 4 de byte, e size int divide por 4 para calcular a quantidade do vetor
 		
 	for(int i =0; i<tam; i++)
 		vet[i] = lerNum();

 	//involke da função
 	puts("conteúdo do vetor");
 	printf(" ");
 	imprimirVetor(vet, tam); //por ser vetor ele não precisa do &
 	printf("\nconteúdo do vetor ao contrário: \n");
 	printf(" ");
 	imprimirVetorcontrario(vet, tam);	
	 
 } //fim do progama
 int lerNum()
 {
 	
 	int num;
 	printf("digite um número");
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
