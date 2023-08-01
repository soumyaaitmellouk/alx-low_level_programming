#include "main.h"
/**
 * _strchr - function that locates a character in a string.
 * @s: pointer
 * @c: caractère a trouver.
 * Return:two cases.
 */
char *_strchr(char *s, char c)
{
	int i = 0, j, len = 0;
	char *ret;

	while (*(s + i) != '\0')
	{
		len++;
		i++;
	}
	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			while (*(s + i) != '\0')
			{
			for (j = 0; j <= len - i; j++)
			{
				*(ret + j) = *(s + i);
				i++;
			}
			}
			return (ret);
		}
		else
			i++;
	}
	return (NULL);
}
