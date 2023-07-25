#include "main.h"

/**
 *print_line - draws a straight line in the terminal.
 *
 *Return: draws a straight line in the terminal.
 */

void print_line(int n)
{
if (n == 0 || n < 0)
{
_putchar('\n');
}
else
{
_putchar('_');
}
_putchar('\n');
}
