#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - check the code for Holberton School students.
 * @s: Primer string ingresado con puntero
 * @c: Segundo string ingresado sin puntero
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{
int i;
char *null = NULL;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
return (s + i);
}
if (s[i] == '\0')
return (s + i);
else
return (null);
}
