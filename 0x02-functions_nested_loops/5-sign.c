#include "holberton.h"
/**
 * print_sign - check the code for Holberton School students.
 *
 * Return: Always 0.
 *
 * @n: deficion de variable en la funcion
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar ('+');
return (1);
}
else if (n == 0)
{
_putchar ('0');
return (0);
}
else
{
_putchar ('-');
return (-1);
}
_putchar('\n');
}
