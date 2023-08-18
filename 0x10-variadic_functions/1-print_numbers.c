#include <stdio.h>
#include <stdlib.h>

/**
 *print_numbers - prints numbers followed by new line.
 *@separator:string to be printed between numbers
 *@n: number of integers passed to the function
 *Return: numbers followed by new line.
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
printf("%d%s",va_arg(ptr,int),separator);
}
_putchar('\n');
}
va_end(ptr);
}
