#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of integers
 * @min: valor minimo
 * @max: valor maximo
 * Return: The pointer to the newly created array
 */

int *array_range(int min, int max)
{
int *array;
int i;
int size;

if (min > max)
return (NULL);
size = (max - min + 1);
array = malloc(sizeof(int) * size);
if (array == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
array[i] = min;
min++;
}
return (array);
}
