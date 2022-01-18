#include "search_algos.h"

/**
* binary_search - searches for a value in an array of integers
* @array: first element of the array to search in
* @size: size of the array
* @value: the value to search
* Return: value.
*/

int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1, mid = 0, i = 0;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	mid = (l + r) / 2;
	while (l <= r)
	{
		printf("Searching in array:");
		for (i = l; i <= r; i++)
		{
			printf(" %d", array[i]);
			if (i < r)
			{
				printf(",");
			}
			else
			{
				printf("\n");
			}
		}
		if (array[mid] == value)
		{
			return (mid);
		}
		if (array[mid] < value)
		{
			l = mid + 1;
		}
		else
		{
			r = mid - 1;
		}
		mid = (l + r) / 2;
	}
	return (-1);
}
