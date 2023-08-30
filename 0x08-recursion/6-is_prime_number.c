#include "main.h"

/**
 *compare- function that counts number of factors of n.
 *@n: number to evaluate.
 *@y: current value being tested as factor.
 *Return: square root.
 */
int compare(int n, int y)
{
int count = 0;
if (y <= n)
{
if (n % y == 0)
count++;
return (count + compare(n, y + 1));
}
return (count);
}

/**
 *is_prime_number - return 1 if is number prime
 *@n: number to evaluate
 *Return: 1 or 0
 */
int is_prime_number(int n)
{
if (compare(n, 1) == 2)
return (1);
else
return (0);
}
