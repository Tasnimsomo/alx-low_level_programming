#include "main.h"

/**
 * puts2 - prints every character
 * _putchar - print each character
 * @str: char to check
 *
 *Return: 0 is success
 */

void puts2(char *str)
{
while (*str != 0)
{
_putchar(*str);
str++ 
}
_putchar('\n');
}
