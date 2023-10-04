#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an  array.
 * @size: size of array
 * @c: char to assign
 * Description: create array of size size and assign char c
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *string;
	unsigned int x;

	string = malloc(sizeof(char) * size);
	if (size == 0 || string == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		string[x] = c;
	return (string);
}
