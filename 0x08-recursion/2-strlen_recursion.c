#include "main.h"

/**
 *_strlen_recursion - returns length of string.
 *@s : string used.
 *Return: Length of string.
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return;
}
else
{
return 1 + _strlen_recursion(s + 1);
}
  
