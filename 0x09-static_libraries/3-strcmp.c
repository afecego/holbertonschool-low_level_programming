#include "holberton.h"
#include <stdio.h>

/**
 * _strcmp - check the code for Holberton School students.
 * @s1: Parametro primera string
 * @s2: Parametro segunda string
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
int s;

s = 0;
while (s1[s] != '\0' && s2[s] != '\0')
{
if (s1[s] != s2[s])
return (s1[s] - s2[s]);
s++;
}
if (s1[s] == s2[s])
return (0);
return (s1[s] - s2[s]);
}
