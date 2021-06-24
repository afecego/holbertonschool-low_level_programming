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

for (hor = 0; hor <= 23; hor = hor + 1)
{
for (min = 0; min <= 59; min = min + 1)
{
_putchar((hor / 10) + '0');
_putchar((hor % 10) + '0');
_putchar(':');
_putchar((hor / 10) + '0');
_putchar((hor % 10) + '0');
_putchar('\n');
}
}
}
