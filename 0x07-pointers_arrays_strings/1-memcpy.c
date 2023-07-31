#include "main.h"
/**
 * _memcpy()- function that copies memory area.
 * @dest: first pointer.
 * @src: second pointer.
 * @n: nombre d'element a copier.
 * Return: Returns a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
