#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - check the code for Holberton School students.
 * @n: Cantidad toal de datos
 * Return: Always 0.
 */

int sum_them_all(const unsigned int n, ...)
{
unsigned int c, sum;
va_list ap;

va_start(ap, n);

sum = 0;
if (n == 0)
return (0);

else

for (c = 0; c < n; c++)
sum = sum + va_arg(ap, unsigned int);
va_end(ap);
return (sum);
}
