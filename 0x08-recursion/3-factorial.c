#include "main.h"

/**
 * int factorial - factorial of a given number.
 *@n:number to test.
 *Return:Factorial of a number.
 */
int factorial(int n)
{
if (n == 1)
{
return (1);
}
else
{
return ( n * factorial(n-1));
}
}
