#include <stdio.h>
#include <stddef.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: num of int
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ptr;
va_start(ptr, n);
unsigned int i;
if (separator == NULL)
{
return;
}
else
{
for (i = 0; i < n; i++)
{
printf("%d%s",va_arg(ptr,unsigned int),separator);
}
va_end(ptr);
printf("\n");
}
}
