/*
	Name: Funcoes2.cpp
	Author: Fabio.FONtes
	Date: 18/08/25 10:10
	Description: progamas para funcoes
*/
#include <stdio.h>
#include<locale.h>
int lerNum();
int somar(int,int);
int multiplicar(int,int);
float dividir(int,int);

main()
{

	 setlocale(LC_ALL,"portuguese");
 	
	//int a, b, result;
	//a = b =  result = 0;
	//a = lerNum();
	//b = lerNum();
	//result = somar(lerNum(), lerNum());
	printf("a soma é: %d", lerNum() + lerNum());
	printf("a multiplicação é = %d", multiplicar(lerNum(), lerNum()));
	printf("a divisão é:%.2f", dividir(lerNum(), lerNum()));
	printf("a subtração é: %d", lerNum() - lerNum());
	
} //fim do main

int somar(int x, int y)
{
	return x + y;
}
int subtrair(int x, int y)
{
	return x - y;
}
int multiplicar(int xis, int ypslon)
{
	return xis * ypslon;
}
int lerNum()
{
	int num = 0;
	printf("digite um número:\n"); scanf("%d", &num);
	return num;
	
}

float dividir(int d, int c)
{
	return  (float) c / d;
}
