#include "main.h"
/**
 * _strncpy - Write a function that copies a string.
 * @dest: first string.
 * @src: second string.
 * @n: nombre de caractère.
 * Return: le nouveau dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && *(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
 return (dest);
}
