#include "holberton.h"
#include <stdio.h>

/**
 * string_toupper - check the code for Holberton School students.
 * @t: Paametro de la fucion
 * Return: Always 0.
 */

char *string_toupper(char *t)
{
int x;

x = 0;

while (t[x] != '\0')
{
if (t[x] >= 'a' && t[x] <= 'z')
{
t[x] = t[x] - 'a' + 'A';
}
x++;
}
return (t);
}
