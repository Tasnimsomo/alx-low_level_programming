#include "main.h"

/**
 *_strcat - concatenates two strings
 *@dest -to test.
 *@src - to test.
 *
 *Returns: Pointer to resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
while (*dest)
{
dest++;
while (*src)
{
*dest = *src;
src++;
}
}
*dest = '\0';
return (dest);
}
