/*
	Name: Funcoes.cpp
	Author: Fabio Leite, Gustavo Batista
	Date: 18/08/25 08:28
	Description: programa para demonstrar o uso de funções
*/

#include <stdio.h>
#include<locale.h>

// sessão de prototipação
void imprimirMensagem();
int somar(int,int);
int subtrair(int,int);
int multiplicar(int,int);
float dividir(int,int);
int potenciar (int, int);
int fatoriar (int);

main()
{
	 setlocale(LC_ALL,"portuguese");
	int a,b,soma, subtracao, potencia, multiplicacao, fatoriala, fatorialb, escolha;
	float divisao;

	
	printf("digite o valor de A: ");
	scanf("%d", &a);
	
	printf("digite o valor de B: ");
	scanf("%d", &b);
	
	
	

	

	soma = somar(a,b); // invoke
	subtracao = subtrair(a, b);
	multiplicacao = multiplicar(a,b);
	divisao = dividir(a,b);
	potencia = potenciar(a,b); 
	fatoriala = fatoriar(a);
	fatorialb = fatoriar(b);
	
	
	printf(" a soma é: %d \n a subtração é: %d \n a multiplicacao é: %d \n a divisão é: %.2f \n a potencia é: %d \n o fatorial de a é: %d \n o fatorial de b é: %d", soma, subtracao, multiplicacao, divisao, potencia, fatoriala, fatorialb);
}//fim do programa 

void imprimirMensagem(){puts("=====> EU <=====");}

int lerNum(){
	int n;
	printf("digita um numero seu quengo");
	scanf("%d",&n);
	return n;
}

int somar(int a, int b){return a+b;}
int subtrair(int a, int b){return a-b;}
int multiplicar(int a, int b){return a*b;}
float dividir(int a,  int b){return (float)a/b;}
int potenciar(int a,  int b){int resultado = 1;	if(a==0){return 1;}	for(int i = 0; i<b; i++){resultado = resultado * a;}return resultado;}
int fatoriar(int a){int resultado = 1;if(a==0){return 1;}for(int i = a; i>1; i--){resultado = i * resultado;}return resultado;}
