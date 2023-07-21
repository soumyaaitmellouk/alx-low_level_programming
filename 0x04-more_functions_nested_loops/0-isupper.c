#include "main.h"
/**
*_isupper -print the alphabets in lowercase
*@c: parametre a essayer
*Description: c program print a sentance.
*Return: Always 0 (Success)
*/
int _isupper(int c)
{
if (c >= 65 && c <= 90) 
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
