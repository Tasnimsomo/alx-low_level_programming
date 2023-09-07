#include "main.h"
#include <string.h>

/**
 * string_nconcat - concatenate two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: integer to test.
 * Return: entire string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1 = 0;
unsigned int len2 = 0;
unsigned int i, j;
char *concat;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (i = 0; s1[i] != '\0'; i++)
len1++;
for (i = 0; s2[i] != '\0' && i < n; i++)
len2++;
concat = malloc(sizeof(char) * (len1 + len2 + 1));
if (concat == NULL)
return (NULL);
unsigned int len = 0;
for (i = 0; s1[i] != '\0'; i++)
concat[len++] = s1[i];
for (j = 0; j < len2; j++)
concat[len++] = s2[j];
concat[len] = '\0';
return (concat);
}
