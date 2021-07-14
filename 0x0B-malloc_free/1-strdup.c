#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - check the code for Holberton School students.
 * @str: Variable de ingreso
 * Return: Always 0.
 */

char *_strdup(char *str)
{
char *let;

if (str == 0)
{
return (NULL);
}
let = malloc(strlen(str) + 1);

if (let == NULL)
{
return (NULL);
}
strcpy(let, str);
return (let);
}
