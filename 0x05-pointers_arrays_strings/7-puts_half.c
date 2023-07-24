#include "main.h"
  /**
 * puts_half - prints half of a string
 * @str: char to check
 *
 * Return: 0 is success
 */

void print_half_string(char *str)
{
int i;
int len = 0;
while (str[len] != '\0') {
len++;
}
int half_len = len / 2;
if (len % 2 != 0)
{
half_len = (len - 1) / 2;
}
for (i = 0; i < half_len; i++)
{
_putchar(str[i]);
}
}
