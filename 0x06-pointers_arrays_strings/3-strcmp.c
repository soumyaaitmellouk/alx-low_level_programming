#include "main.h"
/**
 * _strcmp - a function that compares two strings
 * @s1: first string .
 * @s2: second string.
 * Return: 0 if s1=s2, negatif if s1<s2; greater than 0 if s1>s2.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int len1 = 0;
	int len2 = 0;

	while (*(s1 + i) != '\0')
	{
		len1++;
		i++;
	}
	while (*(s2 + j) != '\0')
	{
		len2++;
		j++;
	}
	if (len1 == len2)
	{
		return (0);
	}
	else if (len1 > len2)
	{
		return (15);
	}
	else
		return (-15);
}
