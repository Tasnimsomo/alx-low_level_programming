#include "main.h"

/**
 *_print_rev_recursion- prints string followed by new line.
 *@s: string to test.
 *Return: Nothing.
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
}
else
{
_putchar(*s);
_puts_recursion(s + 1);
}
}
