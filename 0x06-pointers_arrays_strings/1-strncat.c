#include "main.h"
/**
 * _strncat - Write a function that concatenates two strings.
 * @dest: string 1:
 * @src: string 2:
 * @n: nombre de caractère a couper.
 * Return: the string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (j < n && *(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		j++;
		i++;
	}
	return (dest);
}
