#include "main.h"

/**
 *_strcat - concatenates two strings
 *@dest -to test.
 *@src - to test.
 *
 *Returns: Pointer to resulting string dest.
 */
char *_strcat(char *dest, char *scr)
{
int i, j;
for (i = 0; dest[i] != '\0'; i++)
{
for (j = 0; src[j] != '\0'; j++)
{
dest[i+j] = src[j];
}
}
dest[i+j] = '\0';
return dest;
}