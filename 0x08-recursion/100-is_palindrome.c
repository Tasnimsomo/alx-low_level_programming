#include "main.h"
/**
 * length - calculates length of string
 * @s: input
 * Return: 0
 */

int length(char *s)
{
if (*s != '\0')
{
return (1 + length(s + 1));
}
return (0);
}

/**
 * compare -compares strings at beginning and end
 * @s: input
 * @l: input
 * Return: 0
 */
int compare(char *s, int l)
{
if (l <= 0)
{
return (1);
}
if (*s == *(s + (l - 1)))
{
return (compare(s + 1, l - 2));
}
else
{
return (0);
}
}

/**
 * is_palindrome - checks if palindrome
 * @s: input
 * Return: 0
 */
int is_palindrome(char *s)
{
int l;
l = length(s);
return (compare(s, l));
}
