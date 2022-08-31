/*=================================
		FUNCIONES PROPIAS
 ==================================*/
int scanValInt(char mensaje[], char error[], int min, int max) {
	int numeroIngresado;
	printf(mensaje);
	scanf("%i", &numeroIngresado);
	while(numeroIngresado < min || numeroIngresado > max) {
		printf(error);
		scanf("%i", &numeroIngresado);
	}

	return numeroIngresado;
}

int scanInt(char mensaje[]) {
	int numero;
	printf(mensaje);
	scanf("%i", &numero);

	return numero;
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
	// float division;

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
