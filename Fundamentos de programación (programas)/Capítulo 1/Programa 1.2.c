#include <stdio.h>

/*Invierte los datos
Al recibir como dato un conjunto de datos de entrada, invierte su orden cuando los imprime

A, B, C y D: variables de tipo entero. */

void main(void)
{
int A, B, C, D;
printf("Ingrese cuatro datos de tipo entero: ");
scanf("%d %d %d %d", &A, &B, &C, &D);
printf("\n %d %d %d %d", D, C, B, A);
}

