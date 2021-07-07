#include "holberton.h"
#include <stdio.h>

/**
 * _strspn - check the code for Holberton School students.
 * @s: Parametro necesario para la funcion
 * @accept: Parametro necesario para la funcion
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
int i = 0, j, a = 1;
unsigned int count = 0;

while (s[i] != '\0' && a == 1)
{
a = 0;
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
count++;
a = 1;
break;
}
}
i++;
}
return (count);
}
