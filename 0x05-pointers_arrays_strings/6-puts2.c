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
if (strlen(str) % 2 != 0)
return 1;
while (*str)
{
_putchar(*str);
str +=2; 
}
_putchar('\n');
}
