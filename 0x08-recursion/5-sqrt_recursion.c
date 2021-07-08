#include "holberton.h"
#include <stdio.h>

/**
 * sqr_raiz - returns the natural sqare root of a number
 * @x: numero inicial de la raiz
 * @ra: raiz cuadrada
 * Return: Raiz cuadrada de un numero
 */

int sqr_raiz(int x, int ra)
{
if (x == ra * ra)
return (ra);
else if (x < ra * ra)
return (-1);
return (sqr_raiz(x, ra + 1));
}


/**
 * _sqrt_recursion - check the code for Holberton School students.
 * @n: Parametro de ingreso para raiz cuadrada
 * Return: Always 0.
 */

int _sqrt_recursion(int n)
{

if (n < 0)
return (-1);
return (sqr_raiz(n, 0));

}
