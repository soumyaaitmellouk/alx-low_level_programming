#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
* Description: c program print a sentance.
* Return: Always 0 (Success)
* 0 is zero
*/
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
int m;
m= n%2;
if ( abs(m) > 5)
{        
printf (" Last digit of %d is %d and is greater than 5" , n, m);
}
else if ( abs(m) == 0)
{
printf (" Last digit of %d is %d and is 0", n, m);
}
else  if ( abs(m) < 6) && ( abs(m) > 0)
{
printf (" Last digit of %d is %d and is less than 6 and not 0", n, m);
}
return (0);
}

