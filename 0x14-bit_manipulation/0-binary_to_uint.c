#include "main.h"
/**
 * binary_to_uint - convert binary number to unsigned int
 * @b: pointer of a char to convert
 * Return: Always 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int i;
	int base;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i + 1]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		return (0);
	}

	for (base = 1; i >= 0; i--, base *= 2)
	{
		res += (b[i] - '0') * base;
	}
	return (res);
}
