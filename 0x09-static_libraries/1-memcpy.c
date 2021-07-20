#include "holberton.h"
#include <stdio.h>

/**
 * _memcpy - prints buffer in hexa
 * @dest: area de memoria
 * @src: constante byte
 * @n: byte del area de memoria
 * Return: Nothing.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
while (n > 0)
{
dest[n - 1] = src[n - 1];
n--;
}
return (dest);
}
