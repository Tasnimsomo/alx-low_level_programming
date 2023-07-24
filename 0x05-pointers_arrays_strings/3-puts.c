#include "main.h"

/**
 * _puts - prints a string.
 * @str: Pointer to the string to measure.
 *
 * Return: Prints a string.
 */
void _puts(char *str)
{
while (*str != 0)
{
_putchar(*str);
str++;
}
_putchar('\n');
}
