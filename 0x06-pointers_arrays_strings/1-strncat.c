#include "main.h"

/**
 *strncat - concatenates two strings.
 *@dest - 
 *@src -
 *@n - number of bytes
 *Return: pointer to resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
int i, j;
for (i = 0; dest[i] != '0'; i++)
{
for (j = 0; src[j] < n && src[j] != '\0')
{
dest[i+j] = src[j];
}
dest[i+j] = '\0'
}
return dest;
}
	
 
