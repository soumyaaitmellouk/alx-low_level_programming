#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: string 1.
 * @accept: string 2.
 * Return: the number of bytes in the initial s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0, count = 0;

	while (*(s + i) >= '\0')
	{
		while (*(accept + j) >= '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				count++;
				j++;
				break;
			}
			else
			{
			j++;
			}
		}
		i++;
	}
	return (count);
}
