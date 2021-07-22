#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - check if a number is equal to 98
 * @array: parametro de entrada del array
 * @size: Tamaño del array
 * @cmp: Puntero de la funcion
 * Return: 0 if false, something else otherwise.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;

if (array == NULL && cmp == NULL)
{
return (-1);
}
if (size <= 0)
{
return (-1);
}

for (i = 0; i < size; i++)
{
if ((*cmp)(array[i]) != 0)
return (i);
}
return (-1);
}
