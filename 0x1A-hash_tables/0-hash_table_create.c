#include "hash_tables.h"

/**
* hash_table_create- create a hash table.
* @size: the size of the hash table.
* Return: pointer to the hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	unsigned long int count;

	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);
	new->size = size;
	new->array = malloc(size * sizeof(hash_table_t *));
	if (new->array == NULL)
	{
		free(new);
		return (NULL);
	}
	for (count = 0; count < size; count++)
		new->array[count] = NULL;
	return (new);
}
