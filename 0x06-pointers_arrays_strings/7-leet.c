#include "holberton.h"
#include <stdio.h>

/**
 * leet - check the code for Holberton School students.
 * @l: Parametro de la funcion
 * Return: Always 0.
 */

char *leet(char *l)
{
int x;
int y;
int num[5] = {4, 3, 0, 1, 7};
char abc[10] = "AaEeOoLlTt";

x = 0;
y = 0;

for (; l[x]; x++)
{
for (y = 0; (l[x] != abc[y] && y < 10); y++)
;
if (l[x] == abc[y])
{
y /= 2;
l[x] = (num[y] + '0');
}
}
return (l);
}
