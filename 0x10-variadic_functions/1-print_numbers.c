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
unsigned int i;
va_start(ptr, n);
for (i = 0; i < n; i++)
{
printf("%d",va_arg(ptr,unsigned int));
if (separator && i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(ptr);
}

