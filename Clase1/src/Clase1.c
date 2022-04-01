/*
 ============================================================================
 Name        : Clase1Verdadera.c
 Author      : santiago
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
*/

#include <stdio.h>
#include <stdlib.h>



int main(void)
{

	setbuf(stdout,NULL);
	int numero;

	printf("Ingrese un numero menor a 10: ");
	scanf("%d", &numero);

	while(numero >10)
	{
		printf("Error,ingrese un numero menor a 10");
		scanf("%d", &numero);
	}

	return EXIT_SUCCESS;
}

