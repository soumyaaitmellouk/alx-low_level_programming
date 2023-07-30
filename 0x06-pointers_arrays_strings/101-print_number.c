#include "main.h"

/**
 * print_number - print numbers chars
 * @n: integer params
 * Return: 0
 */

void print_number(int n)
{
if (n >= 0)
{
	_putchar(n + 48);
}
else
{
	_putchar(-n + 48);
}
_putchar('\n');
}
