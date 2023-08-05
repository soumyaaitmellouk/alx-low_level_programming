#include "main.h"
/**
 * _strlen -  returns the length of a string.
 * @s: the string.
 * Return: the length of a string.
 */
int _strlen(char *s)
{
	int length = 0;
	int i = 0;

	while (*(s + i) != '\0')
	{
		length++;
		i++;
	}
	return (length);
}
