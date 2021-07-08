#include "holberton.h"
#include <stdio.h>

/**
 * _strlen_recursion - check the code for Holberton School students.
 * @s: Parametro de ingreso con la frase
 * Return: Always 0.
 */

int _strlen_recursion(char *s)
{
int con = 0;

if (*s == '\0')
return (0);
else
con = 1 + _strlen_recursion(s + 1);
return (con);
}
