#include <stdio.h>
/**
*main - Entry point
*Description: c program print a sentance.
*Return: Always 0 (Success)
*0 is zero
*/
int main(void)
{
int n =  97;
while (n <= 122)
{
if (n == 113 || n == 101)
{
n++;
continue;
}
putchar(n);
n++;
}
putchar('\n');
return (0);
}
