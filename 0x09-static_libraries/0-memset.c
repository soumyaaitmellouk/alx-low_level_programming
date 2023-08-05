#include "main.h"
/**
 * _memset()- a function that fills memory with a constant byte.
 * @s: first parameter.
 * @b: second parameter.
 * @n: third parameter.
 * Return: a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
