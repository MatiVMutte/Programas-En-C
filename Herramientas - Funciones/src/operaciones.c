/*==============================================
 *		FUNCIONES PROPIAS DESARROLLADAS         *
 ===============================================*/
#include <stdio.h>

int scanInt(char mensaje[]) {
	int numero;
	printf(mensaje);
	scanf("%i", &numero);

	return numero;
}

float scanFloat(char mensaje[]) {
	float numero;
	printf(mensaje);
	scanf("%f", &numero);

	return numero;
}

char scanChar(char mensaje[]) {
	char caracter;
	printf(mensaje);
	fflush(stdin);
	scanf("%c", &caracter);

	return caracter;
}

int scanValInt(char mensaje[], char error[], int min, int max) {
	int numeroIngresado;
	numeroIngresado = scanInt(mensaje);
	while(numeroIngresado < min || numeroIngresado > max) {
		numeroIngresado = scanInt(error);
	}

	return numeroIngresado;
}

char toUpperCase(char letra) {
	if(letra > 96 && letra < 123) {
		letra -= 32;
	}
	return letra;
}

char toLowerCase(char letra) {
	if(letra > 64 && letra < 91) {
		letra += 32;
	}
	return letra;
}

int Dividir(int dividendo, int divisor, float* resultado) {
	int estado;

	if(divisor != 0) {
		*resultado = (float) dividendo / divisor;
		estado = 1;
	} else {
		estado = 0;
	}

	return estado;
}

int Factorial(int num) {
	int fact = 1;
	if(num >= 0) {
		for(int i = 1; i <= num; i++) {
			fact = fact * i;
		}
	} else {
		fact = 0;
	}

	return fact;
}
