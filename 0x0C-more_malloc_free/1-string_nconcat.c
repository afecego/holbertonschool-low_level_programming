#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - check the code for Holberton School students.
 * @s1: Parametro string 1
 * @s2: Parametro string 2
 * @n: Parametro tamaño bytes
 * Return: Always 0.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
char *a;
unsigned int x, y, str1, str2;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (x = 0; s1[x] != '\0'; x++)
;
for (y = 0; s2[y] != '\0' && y < n; y++)
;
str1 = x;
str2 = y;
a = malloc(sizeof(char) * (str1 + str2 + 1));
if (a == NULL)
return (NULL);
for (x = 0; x < str1; x++)
{
a[x] = s1[x];
}
for (y = 0; y < str2; y++)
a[x + y] = s2[y];
a[x + y] = '\0';
return (a);
}
