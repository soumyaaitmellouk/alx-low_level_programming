#include <stdio.h>
/**
 * add- addition
 * @a: parametr 1.
 * @b: parametr 2
 * Return: somme
 */
int add(int a, int b)
{
	return (a + b);
}
/**
 * sub- subbb
 * @a: parametr 1.
 * @b: parametr 2
 * Return: somme
 */
int sub(int a, int b)
{
	return (a - b);
}
/**
 * div- divide a by b
 * @a: parametr 1.
 * @b: parametr 2
 * Return: div
 */
int div(int a, int b)
{
	if (b == 0)
	{	printf("Error");
		return (0);
	}
	else
	{
		return (a / b);
	}
}
/**
 * mul- multiple a et b
 * @a: parametr 1.
 * @b: parametr 2
 * Return: multi
 */
int mul(int a, int b)
{
	return (a * b);
}
/**
 * mod- moduloo a et b
 * @a: parametr 1.
 * @b: parametr 2
 * Return: modulo
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error");
		return (0);
	}
	else
	{
		return (a % b);
	}
}
