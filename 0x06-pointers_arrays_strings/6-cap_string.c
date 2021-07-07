#include "holberton.h"
#include <stdio.h>

/**
 * cap_string - check the code for Holberton School students.
 * @c: Parametro necesario de la funcion
 * Return: Always 0.
 */

char *cap_string(char *c)
{
char *sow = " \t\n,;.!?\"(){}";
int i, j, aux, k;

i = 0;
j = 0;
aux = 1;
k = 0;

for (; c[i]; i++)
for (; j < i; j++)
{
if (c[j] >= 'A' && c[j] <= 'Z')
aux = 0;
if ((c[j] >= 'a' && c[j] <= 'z') && aux == 1)
{
c[j] = ((c[j] - 'a') + 'A');
aux = 0;
}
for (k = 0; sow[k]; k++)
{
if (c[j] == sow[k])
{
aux = 1;
if (!(c[j + 1] <= 'z' && c[j + 1] >= 'a'))
aux = 0;
}
}
}
return (c);
}
