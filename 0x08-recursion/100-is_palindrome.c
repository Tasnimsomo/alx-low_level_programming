#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *is_palindrome_recursive- helper function.
 *@s: character to test.
 *@left: character to test.
 *@right: character to test.
 *Return:1 if a string is a palindrome and 0 if not.
 */
int is_palindrome_recursive(char *s, int left, int right)
{
if (left >= right)
{
return (1);
}
if (s[left] != s[right])
{
return (0);
}
return (is_palindrome_recursive(s, left + 1, right - 1));
}
/**
 *is_palindrome-returns 1 if a string is a palindrome and 0 if not.
 *@s:character to test.
 */
int is_palindrome(char *s)
{
int length = strlen(s);
return (is_palindrome_recursive(s, 0, length - 1));
}

