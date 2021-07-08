#include "holberton.h"
#include <stdio.h>

/**
 * _pow_recursion - check the code for Holberton School students.
 * @x: Parametro de entrada inicial
 * @y: Parametro de entrada segundo
 * Return: Always 0.
 */

int _pow_recursion(int x, int y)
{

if (y > 0)

return (x * _pow_recursion(x, y - 1));

else if (y == 0)

return (1);

else

return (-1);

}
