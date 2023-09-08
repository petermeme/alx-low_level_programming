#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array to be created
 *
 * Return: pointer to the newly created hash table, or NULL on failure
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **n_array;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	n_array = malloc(sizeof(hash_node_t *) * size);
	if (!n_array)
		return (NULL);

	for (i = 0; i < size; i++)
		n_array[i] = NULL;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);

	table->size = size;
	table->array = n_array;

	return (table);
}
