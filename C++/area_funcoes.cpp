/*
	Name: funcoes_area.cpp
	Author: Fabio.fontes.
	Date: 10/09/25 12:31
	Description: progama que calcula área do triangulo, circulo, trapezio, quadrado e retângulo utilizando funções.
*/
#include <stdio.h>
#include<string.h>

double areaTriangulo(double, double);
double areaCirculo(double, double);
double areaTrapezio(double, double, double);
double areaSquare(double);
double areaRetangulo(double, double);

int main() {
    double a, b, c, pi;
    a = b = c = 0.0;
    pi = 3.14159;

    scanf("%lf %lf %lf", &a, &b, &c);

    printf("TRIANGULO: %.3lf\n", areaTriangulo(a, c));
    printf("CIRCULO: %.3lf\n", areaCirculo(c, pi));
    printf("TRAPEZIO: %.3lf\n", areaTrapezio(a, b, c));
    printf("QUADRADO: %.3lf\n", areaSquare(b));
    printf("RETANGULO: %.3lf\n", areaRetangulo(a, b));

    return 0;
}

// Definições das funções
double areaTriangulo(double a, double c) {
    return (c * a) / 2;
}

double areaCirculo(double c, double pi) {
    return pi * (c * c);
}

double areaTrapezio(double a, double b, double c) {
    return (a + b) * c / 2;
}

double areaSquare(double b) {
    return b * b;
}

double areaRetangulo(double a, double b) {
    return a * b;
}
