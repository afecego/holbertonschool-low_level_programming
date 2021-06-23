#include "holberton.h"
/**
 * print_alphabet - Abecedario con funciones.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
char abc;

for (abc = 'a' ; abc <= 'z' ; abc++)
{
_putchar(abc);
}
_putchar('\n');
}
