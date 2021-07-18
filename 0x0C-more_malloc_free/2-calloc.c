#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *_calloc - allocates memory for an array
 * @nmemb: tamaño del array
 * @size: tamaño de la memory
 * Return: Nothing.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *array;
unsigned int x;

if (nmemb == 0 || size == 0)
return (NULL);
array = malloc(size * nmemb);
if (array == NULL)
return (NULL);
for (x = 0; x < (size * nmemb); x++)
array[x] = 0;
return (array);
}
