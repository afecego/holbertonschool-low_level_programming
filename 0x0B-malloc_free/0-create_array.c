#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - prints buffer in hexa
 * @size: the address of memory to print
 * @c: the size of the memory to print
 *
 * Return: Resultado.
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *s;

s = malloc(size * sizeof(char));

if (size == 0 || s == 0)
{
return (NULL);
}
else
{
for (i = 0 ; i < size ; i++)
{
s[i] = c;
}
}
return (s);
}
