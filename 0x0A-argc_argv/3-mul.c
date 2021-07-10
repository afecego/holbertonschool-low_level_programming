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

if (argc == 3)
{
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
else
{
printf("Error\n");
return (1);
}
}
