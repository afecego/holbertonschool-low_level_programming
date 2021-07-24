#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - check the code for Holberton School students.
 * @separator: Variable de string que se imprimira
 * @n: Cantidad de variables
 * Return: Always 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;

va_list ap;

va_start(ap, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(ap, int));
if (i < (n - 1) && separator != NULL)
{
printf("%s", separator);
}
}

printf("\n");

va_end(ap);

}
