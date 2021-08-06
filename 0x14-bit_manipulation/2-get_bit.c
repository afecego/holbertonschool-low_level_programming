#include "main.h"
/**
 * get_bit - print representation from binary number
 * @n: long of bit
 * @index: index del bit
 * Return: Always 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int x, y;

	if (index > sizeof(unsigned int) * 8)
	{
		return (-1);
	}
	x = n >> index;
	y = x & 1;

	return (y);
}
