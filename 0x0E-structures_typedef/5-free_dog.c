#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Liberar espacio
 * @d: Parametro de entrada
 * Return: Always 0.
 */

void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
