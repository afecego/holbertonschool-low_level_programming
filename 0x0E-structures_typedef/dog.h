#ifndef STRUCTUR
#define STRUCTUR
#include <stdio.h>
/**
 * struct dog - Nombre de la estructura
 * @name: Nombre del dog
 * @age: Edad del dog
 * @owner: Dueño del dog
 */

struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
