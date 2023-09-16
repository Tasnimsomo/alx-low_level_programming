#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - prints the sum of all its parameters.
 * @n: number of arguments
 * Return: sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int sum;
unsigned int i;
va_list ptr;
if (n == 0)
{
return (0);
}
else
{
va_start(ptr, n);
sum = 0;
for (i = 0; i < n; i++)
{
sum = sum + va_arg(ptr, unsigned int);
}
va_end(ptr);
return (sum);
}
}
