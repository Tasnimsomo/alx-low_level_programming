#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: char to check
 *
 * Return: 0 is success
 */

void puts_half(char *str)
{
int len = strlen(str);
int half_len;
if (len % 2 == 0)
{
half_len = len / 2;
}
else
{
half_len = (len - 1) / 2;
}
for (int i = half_len; i < len; i++) {
_putchar(str[i]);
}
_putchar('\n');
}
