#include "main.h"
/**
*print_alphabet -print the alphabets in lowercase
*Description: c program print a sentance.
*Return: Always 0 (Success)
*/
void print_alphabet(void)
{
int n=97;
while (n <= 122)
{
_putchar(n);
n++;
}
_putchar('\n');
}
