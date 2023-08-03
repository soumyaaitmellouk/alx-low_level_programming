#include "main.h"
/**
 * _puts_recursion - function like puts();
 * @s: input
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	int i = 0;

	while (*(s + 1) != '\0')
	{
		_putchar(*(s + i));
		i++;
		_puts_recursion(*(s + i));
	}

	_putchar('\n');
}
