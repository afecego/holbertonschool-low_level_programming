#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - check the code for Holberton School students.
 * @b: Parametro de entrada
 * Return: Always 0.
 */

void *malloc_checked(unsigned int b)

{
int *x;

x = malloc(b);
if (x == NULL)
{
exit(98);
}
return (x);

}
