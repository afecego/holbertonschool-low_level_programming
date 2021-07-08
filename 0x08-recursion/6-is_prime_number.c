#include "holberton.h"
#include <stdio.h>

/**
 * primo - checks whether a number is prime or not prime
 * @x: Parametro para la funcion
 * @y: Parametro para la funcion
 * Return: funcion primo
 */
int primo(int x, int y)
{
if (x < 2)
return (0);
if (x / 2 < y)
return (1);
if (x % y == 0)
{
return (0);
}
return (primo(x, y + 1));
}


/**
 * is_prime_number - check the code for Holberton School students.
 * @n: Numero a validar si es primo
 * Return: Always 0.
 */

int is_prime_number(int n)
{
return (primo(n, 2));
}
