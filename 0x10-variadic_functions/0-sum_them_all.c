#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of arguments
 * Return :sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
if (n == 0)
{
return (0);
}
else
{
int sum = 0;
int i;
va_list ptr;
va_start(ptr, n);
for (i = 0 ; i < n ; i++)
{
sum = sum + va_arg(ptr , int);
}
va_end(ptr);
return (sum);
}
}
