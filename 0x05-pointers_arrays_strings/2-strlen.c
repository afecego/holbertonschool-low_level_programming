#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - check the code for Holberton School students.
 * @s: Parametro de la funcion
 * Return: Always 0.
 */

int _strlen(char *s)
{
int i;

i = 0;

while (*s != '\0')
{
s++;
i++;
}
return (i);
}
