#include "holberton.h"
#include <stdio.h>

/**
 * _strcpy - check the code for Holberton School students.
 * @dest: Parametro de la funcion
 * @src: Parametro de la funcion
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
int i;

i = 0;
while (i >= 0)
{
dest[i] = src[i];
if (src[i] == '\0')
return (dest);
i++;
}
return (dest);
}
