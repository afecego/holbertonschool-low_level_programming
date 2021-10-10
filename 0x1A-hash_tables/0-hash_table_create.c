#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: Size of the array
 * Return: pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned int i;

	table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	table->array = malloc(sizeof(hash_node_t *) * size);

	if (table->array == NULL)
	{
		free(table);
		table = NULL;
		return (NULL);
	}

	table->size = size;

	for (i = 0; i < size; i++)
		table->array[i] = 0;

	return (table);
}
