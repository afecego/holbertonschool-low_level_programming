#include "holberton.h"

/**
 * _puts_recursion - check the code for Holberton School students.
 * @s: Parametro de ingreso con la frase
 * Return: Always 0.
 */

void _puts_recursion(char *s)
{

if (*s != '\0')
{
_putchar(*s);
_puts_recursion(s + 1);
return;
}
else
_putchar(10);
}
