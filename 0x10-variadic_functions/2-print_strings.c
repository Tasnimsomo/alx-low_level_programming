#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_strings - prints strings.
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 *
 * Return: no return.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list ptr;
char *string;
va_start(ptr, n);
for (i = 0; i < n; i++)
{
string  = va_arg(ptr,char*);
if (string == NULL)
{
printf("(nil)");
}
if (separator != NULL && i != (n -1))
{
printf("%s%s", string, separator);
}
else
{
printf("%s", string);
}
}
printf("\n");
va_end(ptr);
}
