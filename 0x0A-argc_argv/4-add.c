#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * main - Programa que imprime numeros positivos
 * @argc: cuenta los argumentos
 * @argv: muestra lo que contiene el puntero en cada posicion
 * Return: Always 0, return 1 if an error
 */

int main(int argc, char *argv[])
{
int sum = 0, x, y, z;

for (x = 1; x < argc; x++)
{
for (y = 0; argv[x][y] != '\0'; y++)
{
if (argv[x][y] < '0' || argv[x][y] > '9')
{
printf("Error\n");
return (1);
}
}
z = atoi(argv[x]);
sum += z;
}
printf("%d\n", sum);
return (0);
}
