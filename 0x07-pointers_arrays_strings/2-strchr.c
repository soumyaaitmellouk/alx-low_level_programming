#include "main.h"
#include <stddef.h>
/**
 * _strchr - function that locates a character in a string.
 * @s: pointer
 * @c: caractère a trouver.
 * Return:two cases.
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	char *t;
	char *null = NULL;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			t = (s + i);
			return (t);
			i++;
		}
		else
		{
			i++;
		}
	}
	return (null);
}
