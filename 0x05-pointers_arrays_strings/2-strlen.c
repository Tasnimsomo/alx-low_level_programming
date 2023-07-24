#include "main.h"

/**
 * _strlen - length of string.
 * @s: character to check
 *
 * Return:Length of string.
 */
int _strlen(char *s)
{
int len = 0;
while(*s != 0)
{
len++;
s++;
}

 return (len);
}
