#include "main.h"
/**
 * clear_bit - clear bit whit cero
 * @n: long of bit
 * @index: index del bit 
 * Return: Always 0.
 */
int clear_bit(unsigned long int *n, unsigned int index)
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
    bit = ~bit;
	*n = *n & bit;

	return (1);
}