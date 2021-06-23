#include "holberton.h"
/**
 * _isalpha - check the code for Holberton School students.
 *
 * Return: Always 0.
 *
 * @c: deficion de variable en la funcion
 */

int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && c <= 'B')
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
