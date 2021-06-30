#include "holberton.h"

/**
 * puts_half - check the code for Holberton School students.
 * @str: Parametro para la funcion
 * Return: Always 0.
 */

void puts_half(char *str)
{
int cont, even, neg;

for (cont = 0; str[cont] != '\0'; cont++)
{
;
}
if ((cont % 2) == 0)
{
for (even = cont / 2; str[even] != '\0'; even++)
_putchar(str[even]);
}
else
{
for (neg = (cont - 1) / 2; str[neg] != '\0'; neg++)
_putchar(str[neg + 1]);
}
_putchar('\n');
}
