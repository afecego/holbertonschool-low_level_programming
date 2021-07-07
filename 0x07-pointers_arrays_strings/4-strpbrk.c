#include "holberton.h"
#include <stdio.h>

/**
 * _strpbrk - Searches a string for any set of bytes
 *@s: String tested
 *@accept: input searched for
 * Return: Always 0.
 */

char *_strpbrk(char *s, char *accept)
{
int i, j;
char *a;
for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
{
a = (s + i);
return (a);
}
}
}
return ('\0');
}
