#include "holberton.h"
#include <stdio.h>

/**
 * _strcat - check the code for Holberton School students.
 * @dest: Parametro de primer string
 * @src: Parametro de segundo string
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
int i;
int j;

i = 0;
j = 0;

while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
dest[i] += src[j];
i++;
j++;
}
return (dest);
}
