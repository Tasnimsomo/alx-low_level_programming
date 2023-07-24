#include "main.h"

/**
 * rev_string - printing a string in reverse
 * @str: the string to be printed in rev
 */

void rev_string(char *str)
{
int i, j;
char temp;
int len = 0;
while (str[len] != '\0')
{
len++;
for (i = 0, j = len - 1; i < j; i++, j--)
{
temp = str[i];
str[i] = str[j];
str[j] = temp;
}
}
}
