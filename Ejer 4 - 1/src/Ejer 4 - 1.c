/*
 ============================================================================
 Name        : Ejer.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Realizar un programa EN EL MAIN que permita calcular y mostrar el factorial de un número.
 	 	 	   Utilizar la función PedirNumero de la ejercitación 3-4.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "..\..\Herramientas - Funciones\src\prototipos.h"

int main(void) {
	int numero;
	int fact;
	do {
		numero = scanInt("Ingrese un numero natural: (>= 0)");

		fact = Factorial(numero);

		if(fact < 0) {
			printf("El Factorial no se pudo dar. Pudo haber ingresado un numero negativo. (Y se pide un numero >= 0)");
		}

	}while(fact < 0);

	printf("El factorial de %i es: %i", numero, fact);

	return 0;
}
