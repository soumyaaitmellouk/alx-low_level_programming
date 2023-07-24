#include "main.h"
/**
*swap_int - swaps the values of two integers.
*@a: a pointer of a.
*@b: b pointer of b.
*Return: nothing.
*/
void swap_int(int *a, int *b)
{
int i;
i = *a;
*a = *b;
*b = i;
}
