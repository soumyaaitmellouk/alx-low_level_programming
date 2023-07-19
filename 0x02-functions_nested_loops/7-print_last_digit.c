#include "main.h"
/**
*print_last_digit - print thelast digit of a number
*Description: c program print the last digit.
*@n :le parametre a chercher
*Return: last digit
*/
int print_last_digit(int n)
{
int m;
m = n % 10;
if (m <0)
{
_putchar(-m + 48);
return (-m);
}
else
{
_putchar(m + 48);
return (m);
}
}
