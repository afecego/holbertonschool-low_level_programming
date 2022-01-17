# include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * @array: first element of the array to search in
 * @size: size of the array
 * @value: the value to search
 * Return: Always 0.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
