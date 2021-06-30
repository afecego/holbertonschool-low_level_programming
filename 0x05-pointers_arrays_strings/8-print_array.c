#include <stdio.h>
#include "holberton.h"

/**
 * print_array - check the code for Holberton School students.
 * @a: Parametro de la funcion
 * @n: Parametro de la funcion
 * Return: Always 0.
 */

void print_array(int *a, int n)
{
int len;

for (len = 0; len < n; len++)
{
printf("%d", a[len]);
if (len != n - 1)
printf(", ");
}
printf("\n");
}
