#include "hash_tables.h"
/**
* key_index- a function that gives you the index of a key.
* @key: the key to find the index.
* @size: size of array.
* Return: index of key.
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
