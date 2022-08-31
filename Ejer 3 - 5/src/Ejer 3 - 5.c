/*
 ==============================================================================
 Name        : Ejer 3 - 5.c
 Author      : Reta Mutte Matias | 1°C
 Punto	     : Ejercicio 3-5
 Description : Realizar un programa en donde se puedan utilizar los prototipos de la función Sumar en sus 4 combinaciones.
				int Sumar1(int, int);
				int Sumar2(void);
				void Sumar3(int, int);
				void Sumar4(void);
 ==============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
//#include "..\..\Herramientas - Funciones\src\prototipos.h" // Importe las Funciones Mias

int scanInt(char[]);
int Sumar1(int, int);
int Sumar2(void);
void Sumar3(int, int);
void Sumar4(void);

int main(void) {
	setbuf(stdout, NULL);

	puts("con RETORNO Y PARAMETROS");
	printf("Suma: %i\n", Sumar1(2, 5));

	puts("con RETORNO Y sin PARAMETROS");
	printf("Suma: %i\n", Sumar2());

	puts("sin RETORNO Y con PARAMETROS");
	Sumar3(12, 8);

	puts("sin RETORNO Y sin PARAMETROS");
	Sumar4();

	return 0;
}

int Sumar1(int num1, int num2) {
	return num1 + num2;
}

int Sumar2(void) {
	int num1;
	int num2;

	num1 = scanInt("Ingrese un numero entero: ");
	num2 = scanInt("Ingrese otro numero entero: ");

	return num1 + num2;
}

void Sumar3(int num1, int num2) {
	printf("Suma: %i\n", (num1 + num2));
}

void Sumar4(void) {
	int num1;
	int num2;

	num1 = scanInt("Ingrese un numero entero: ");
	num2 = scanInt("Ingrese otro numero entero: ");

	printf("Suma: %i\n", (num1 + num2));
}

int scanInt(char mensaje[]) {
	int numeroIngresado;
	printf(mensaje);
	scanf("%i", &numeroIngresado);

	return numeroIngresado;
}
