#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints an integer
 * @array: Parametro de entrada del array
 * @size: Tamañao del arrray
 * @action: Puntero de la funcion
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
i = 0;

if (array && action)

for (i = 0 ; i < size ; i++)
(*action)(array[i]);
}
