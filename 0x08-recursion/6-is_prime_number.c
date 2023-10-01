#include "main.h"

int _prime(int n, int x);

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, n - 1));
}

/**
 * _prime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @x: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int _prime(int n, int x)
{
	if (x == 1)
		return (1);
	if (n % x == 0 && x > 0)
		return (0);
	return (_prime(n, x - 1));
}
