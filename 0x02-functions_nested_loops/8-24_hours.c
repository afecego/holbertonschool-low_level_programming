#include <stdio.h>
#include "holberton.h"

/**
 * jack_bauer - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void jack_bauer(void)
{
int hor;
int min;

for (hor = 0; hor < 24; hor++)
{
for (min = 0; min < 60; min++)
{
_putchar((hor / 10) + '0');
_putchar((hor % 10) + '0');
_putchar(':');
_putchar((min / 10) + '0');
_putchar((min % 10) + '0');
_putchar('\n');
}
}
}
