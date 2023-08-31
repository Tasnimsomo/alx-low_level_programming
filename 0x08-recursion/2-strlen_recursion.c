#include "main.h"

/**
 *int _strlen_recursion- returns length of string.
 *@s: string to test.
 *Return: Length of string.
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
else
{
return (1 + _strlen_recursion(s + 1));
}
}
