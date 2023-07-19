#include "main.h"
/**
*_islower -print the alphabets in lowercase
*Description: c program print a sentance.
*Return: 1 for lowercase or 0 othrwise
*@c is a parametr
*/
int _islower(int c)
{
if (c  >= 97 && c <= 122)
{
return (1);
}
return (0);
}
