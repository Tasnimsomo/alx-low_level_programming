#include "main.h"

/**
 *factorial - returns factorial of a given number.
 *@n: integer to test.
 *Return:Nothing
 */
int factorial(int i)
{
if (i <= 0)
{
return 1;
}
else
{
return i * factorial(i - 1);
}
}
