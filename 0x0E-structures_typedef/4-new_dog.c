#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * new_dog - Separacion de espacios para la informacion de ingreso
 * @name: Nombre de entrada del dog
 * @age: Edad de entrada del dog
 * @owner: Nombre del dueño del dog
 * Return: Always 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
int i = 0, j = 0;
dog_t *dog;
int coni = 0;
int conj = 0;
if (name == NULL || owner == NULL)
{return (NULL);
}
dog = malloc(sizeof(dog_t));
if (dog == NULL)
{return (NULL);
}
while (name[i])
{i++;
}
dog->name = malloc(sizeof(char) * (i + 1));
coni = i + 1;
if (dog->name == NULL)
{free(dog);
return (NULL);
}
for (i = 0 ; i < coni ; i++)
{dog->name[i] = name[i];
}
dog->age = age;
while (owner[j])
{j++;
}
dog->owner = malloc(sizeof(char) * (j + 1));
conj = j + 1;
if (dog->owner == NULL)
{free(dog->name);
free(dog);
return (NULL);
}
for (j = 0 ; j < conj ; j++)
{dog->owner[j] = owner[j];
}
return (dog);
}
