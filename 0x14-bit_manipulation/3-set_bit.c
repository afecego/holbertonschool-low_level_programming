#include "main.h"
/**
 * set_bit - change bit for 1
 * @n: long of bit
 * @index: index del bit
 * Return: Always 0.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit;

	if (n == NULL)
	{
		return (-1);
	}

	if (index > sizeof(unsigned int) * 8)
	{
		return (-1);
	}

	bit = 1;
	bit = bit << index;
	*n = *n | bit;

	return (1);

}
