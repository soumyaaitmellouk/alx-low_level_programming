#include "main.h"
/**
*_isalpha -find the alphabets in lowercase
*@c :le parametre a chercher
*Description: c program print a sentance.
*Return: 1 for alphabetic caractere or 0 for anythinf else
*/
int _isalpha(int c)
{
if ((c  >= 97  && c <= 122) || (c >= 65 && c <= 90))
{
	return (1);
}
return (0);
}
