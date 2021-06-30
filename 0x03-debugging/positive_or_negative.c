#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * positive_or_negative - notifica si numero es positivo o negativo
 *
 * @i: entero
 *
 * Return: (0)
 */
void positive_or_negative(int i)
{
if (i > 0)
{
printf("%d is positive\n", i);
}
else if (i == 0)
{
printf("%d is zero\n", i);
}
else
{
printf("%d is negative\n", i);
}
}
