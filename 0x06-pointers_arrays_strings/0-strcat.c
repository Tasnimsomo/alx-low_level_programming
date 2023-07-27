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
int i = 0;
while (dest[i] != '\0')
{
i++;
}
int j = 0;
while (src[j] != '\0')
{
dest[i + j] = src[j];
j++;
}        
dest[i + j] = '\0';
return dest;
}
