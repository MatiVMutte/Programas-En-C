/*
 ============================================================================
 Name        : Ejer 3 - 4.c
 Author      : Reta Mutte Matias | 1°C
 Punto	     : Ejercicio 3-4
 Description : Especializar la función anterior para que permita validar el entero ingresado
 	 	 	   en un rango determinado.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int PedirNumeroInt(void);

int main(void) {
	setbuf(stdout, NULL);
	printf("Numero entero: %i", PedirNumeroInt());

	return 0;
}

int PedirNumeroInt(void) {
	int numeroEntero;

	printf("Ingrese un numero entero (1-10): ");
	scanf("%i", &numeroEntero);
	while(numeroEntero < 0 || numeroEntero > 10) {
		printf("Reingrese un numero entero (1-10): ");
		scanf("%i", &numeroEntero);
	}

	return numeroEntero;
}
