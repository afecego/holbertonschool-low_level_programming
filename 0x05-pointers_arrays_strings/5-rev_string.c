#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - check the code for Holberton School students.
 * @s: Parametro necesario para la funcion
 * Return: Always 0.
 */

void rev_string(char *s)
{
int i, x, y, c;

i = 0;
while (s[i] != '\0')
{
i++;
}
x = 0;
y = i - 1;

while (x < y)
{
c = s[x];
s[x] = s[y];
s[y] = c;
x++;
y--;
}
}
