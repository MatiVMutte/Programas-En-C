#include "operaciones.c"
/*===================================================
 * 			FIRMAS DE LA FUNCIONES					 *
 ====================================================*/

/**
 * \brief --> Funcion que pedi por consola un valor entero validado entre tanto y tanto
 * \param Mensaje para mostrar por pantalla a pedir
 * \param Mensaje de error en caso de que no se cumple la validacion
 * \param Variable que guarda el minimo a validar
 * \param Variable que guarda el maximo a validar
 * \return Retorna el entero pedido por SCANF
 */
int scanValInt(char[], char[], int, int);

/**
 * \brief --> Funcion que pide por consola un valor entero
 * \param Mensaje para mostrar por pantalla a pedir
 * \return Retorna el entero pedido por SCANF
 */
int scanInt(char[]);

/**
 * \brief --> Funcion que convierte una letra MINUSCULA a MAYUSCULA
 * \param Letra a recibir para ser convertida
 * \return Retorna la letra ya convertida en MAYUSCULA
 */
char toUpperCase(char);

/**
 * \brief --> Funcion que convierte una letra MAYUSCULA a MINUSCULA
 * \param Letra a recibir para ser convertida
 * \return Retorna la letra ya convertida en MINUSCULA
 */
char toLowerCase(char);

/**
 * \brief --> Funcion que hace una division, guardandose en la misma variable que enviamos por el 3er parametro
 * \param Dividendo de la division
 * \param Divisor de la division
 * \param Recibe la posicion de memoria de una variable "resultado" para asi almacenarse en esta misma.
 * \return Retorna
 * 				1 --> SI se pudo hacer la division
 * 				0 --> NO se pudo hacer la division | En este caso es por que el divisor NO PUEDE SER 0
 */
int Dividir(int, int, float*);

/**
 * \brief --> Funcion que realiza el FACTORIAL de un numero
 * \param Enviarla un numero entero por parametro
 * \return Retorna
 * 				El Factorial del numero dado.
 * 				EN caso de que no se pueda hacer el factorial, retorna un 0.
 */
int Factorial(int);
