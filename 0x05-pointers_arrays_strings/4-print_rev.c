#include "holberton.h"

/**
 * print_rev - check the code for Holberton School students.
 * @s: Parametro necesario para la funcion
 *
 * Return: Always 0.
 */

void print_rev(char *s)
{
int i;
int cont = 0;
for (i = 0 ; *(s + i) != '\0' ; i++)
{
cont++;
}
for (i = cont - 1 ; i >= 0 ; i--)
{
_putchar(*(s + i));
}
_putchar('\n');
}
