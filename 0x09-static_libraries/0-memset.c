#include "holberton.h"
#include <stdio.h>

/**
 * _memset - prints buffer in hexa
 * @s: area de memoria
 * @b: constante byte
 * @n: byte del area de memoria
 * Return: Always 0.
 */

char *_memset(char *s, char b, unsigned int n)
{
while (n > 0)
{
s[n - 1] = b;
n--;
}
return (s);
}
