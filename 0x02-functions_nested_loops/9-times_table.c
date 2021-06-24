#include "holberton.h"

/**
 * times_table - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void times_table(void)
{
int i, j, resul;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
resul = i * j;

if (j != 0)
{
_putchar(',');
_putchar(' ');
}
if (j == 0)
{
_putchar ('0');
}
else if (resul >= 10)
{
_putchar((resul / 10) + '0');
_putchar((resul % 10) + '0');
}
else if ((resul <= 9) && (j != 0))
{
_putchar(' ');
_putchar((resul % 10) + '0');
}
}
_putchar('\n');
}
}
