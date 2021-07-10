#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Imprimir resultado de multiplicacion
 * @argc: cuenta los argumentos
 * @argv: muestra lo que contiene el puntero en cada posicion
 * Return: resultado de la multiplicacion
 */

int main(int argc, char *argv[])
{
int res;
int fac1;
int fac2;

if (argc == 3)
{
fac1 = atoi(argv[1]);
fac2 = atoi(argv[2]);
res = fac1 * fac2;
printf("%d\n", res);
return (0);
}
else
{
printf("Error\n");
return (1);
}
}
