#include "holberton.h"

/**
 * print_line - check the code for Holberton School students.
 * @n: Parametro que indica cantidad de _
 * Return: Always 0.
 */

void print_line(int n)
{
while (n > 0)
{
_putchar('_');
n--;
}
_putchar('\n');
}
