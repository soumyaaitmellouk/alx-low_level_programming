#include "main.h"
/**
*_abs - print the abs of a number
*Description: c program print the sign.
*Return: n if it's +, 0 for 0, and -n if it's -.
*/
int _abs(int n)
{
if (n > 0)
{
return (n);
}
else
{
if (n < 0)
{
return (-n);
}
else
{
return (0);
}
}
_putchar('\n');
}
