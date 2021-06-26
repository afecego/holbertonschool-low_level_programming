#include "holberton.h"

/**
 * print_square - check the code for Holberton School students.
 * @size: Parametro de medida
 * Return: Always 0.
 */

void print_square(int size)
{
int x, y;
for (x = 1 ; x <= size ; x++)
{
for (y = 1 ; y <= size ; y++)
{
_putchar('#');
}
_putchar('\n');
}
if (size < 1)
{
_putchar('\n');
}
}
