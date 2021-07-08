#include "holberton.h"
#include <stdio.h>

/**
 * factorial - check the code for Holberton School students.
 * @n: Parametro de entrada
 * Return: Always 0.
 */

int factorial(int n)
{
int ans;

if (n == 0)

return (1);

else if (n < 0)

return (-1);

else

ans = n * factorial(n - 1);

return (ans);

}
