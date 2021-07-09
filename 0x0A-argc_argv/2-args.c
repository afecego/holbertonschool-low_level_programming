#include "holberton.h"
#include <stdio.h>

/**
 * main - Print the name of programs
 * @argc: cuenta los argumentos
 * @argv: muestra lo que contiene el puntero en cada posicion
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
int i;

for (i = 0 ; i < argc ; i++)
printf("%s\n", argv[i]);
return (0);
}
