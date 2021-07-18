#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: puntero para relocalizar
 * @old_size: tamaño en bytes
 * @new_size: nuevo tamaño en bytes
 * Return: puntero en nueva localizacion
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *punt;
unsigned int x;

if (ptr == NULL)
{
punt = malloc(new_size);
return (punt);
}
if (new_size == 0)
{
free(ptr);
return (NULL);
}
if (old_size == new_size)
return (ptr);
punt = malloc(new_size);
if (punt == NULL)
return (NULL);
for (x = 0; x < old_size && x < new_size; x++)
punt[x] = ((char *)ptr)[x];
free(ptr);
return (punt);
}
