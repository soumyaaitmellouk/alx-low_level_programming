#include "main.h"
/**
*_isdigit - a function that checks for a digit (0 through 9).
*@c: parametre a essayer
*Description: c program print a sentance.
*Return: return 1 if c is digit or 0 otherwise.
*/
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
