#include "holberton.h"
#include <stdio.h>

/**
 * _strncat - check the code for Holberton School students.
 * @dest: Parametro de primer string
 * @src: Parametro de segundo string
 * @n: Parametro de limite de bytes
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;

while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0' && n--)
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
