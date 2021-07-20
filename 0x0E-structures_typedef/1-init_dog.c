#include "dog.h"

/**
 * init_dog - Nombre de la funcion
 * @d: Nombre del dog
 * @name: Nombre del dog
 * @age: Edad del dog
 * @owner: Dueño del dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
