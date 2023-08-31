#include "main.h"

/**
 *factorial - returns factorial of a given number.
 *@n: integer to test.
 *Return:Nothing
 */
int factorial(int n)
{
if (n <= 0)
{
return (-1);
}
else
{
return (n * factorial(n - 1));
}
}
