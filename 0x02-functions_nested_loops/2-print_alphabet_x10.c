#include "holberton.h"
/**
 * print_alphabet_x10 - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)

{
char abc;
int i;
for (i = 0 ; i <= 10 ; i++)
{
for (abc = 'a' ; abc <= 'z' ; abc++)
{
_putchar(abc);
}
_putchar('\n');
}
}
