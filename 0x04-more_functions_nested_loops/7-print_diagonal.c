#include "holberton.h"
#include <stdio.h>

/**
 * print_diagonal - check the code for Holberton School students.
 * @n: Parametro cantidad de \ en programa
 * Return: Always 0.
 */

void print_diagonal(int n)
{
int i, j;
if (n > 0)
{
for (i = 0 ; i < n ; i++)
{
for (j = 0 ; j < n ; j++)
{
if (i > j)
{
_putchar(' ');
}
if (i == j)
{
_putchar('\\');
}
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
