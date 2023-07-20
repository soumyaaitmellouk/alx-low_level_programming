#include "main.h"
/**
*_isupper -print the alphabets in lowercase
*@c: parametre a essayer
*Description: c program print a sentance.
*Return: Always 0 (Success)
*/
int _isupper(int c)
{
if (c  <= 97 && c >= 122)
{
return (0);
}
else if (c <= 65 && c >= 90)
{
return (1);
}
_putchar('\n');
return;
}
