#include "main.h"

/**
 * flip_bits - return number of bits
 * @n: number to flipped
 * @m: number to flipped to
 * Return: number of bits required
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int idx = 0;
	unsigned long int i;

	i = n ^ m;
	while (i != 0)
	{
		if ((i & 1) == 1)
			idx++;
		i = i >> 1;
	}
	return (idx);
}
