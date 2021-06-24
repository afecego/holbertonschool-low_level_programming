#include "holberton.h"

/**
 * print_last_digit - check the code for Holberton School students.
 * @i: Parametro necesario en la funcion
 * Return: Always 0.
 */
int print_last_digit(int i)
{
int dig = (i % 10);

if (i >= 0)
{
_putchar(dig + '0');
return (dig);
}
else
{
dig = -dig;
_putchar(dig + '0');
return (dig);
}
return (dig);
}
