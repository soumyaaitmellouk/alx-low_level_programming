#include "main.h"
/**
 * print_rev - a function that prints a string, in reverse.
 * @s: string to be printed.
 * Return: nothing.
 */
void print_rev(char *s)
{
	int length = 0;
	int i = 0;

	while (*(s + i) != '\0')
	{
		length++;
		i++;
	}
	length = length - 1;
	while (length >= 0)
	{
		_putchar (*(s + length));
		length--;
	}
_putchar ('\n');
}
