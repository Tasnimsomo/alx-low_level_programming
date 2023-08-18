#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>

/**
 *print_strings- prints string followed by new line.
 *@separator: string to be printed between strings.
 *@n: number of strings passed to the function.
 *Return: prints strings, followed by a new line.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list ptr;
va_start(ptr,n);
for (i = 0; i < n; i++)
{
char* string  = va_arg(ptr,char*);
if (string == NULL)
{
printf("(nil)");
}
if (separator == NULL)
{
printf("%s", string);
}
else
{
printf("%s%s", string, separator);
}
}
printf("\n");
va_end(ptr);
}
