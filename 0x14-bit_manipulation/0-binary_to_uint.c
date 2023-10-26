#include "main.h"

/**
 * unsigned int binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string either 0 or 1
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
int length = strlen(b);
int i;
int result = 0;
if (b == NULL)
{
return(0);
}
for (i = 0; i < length; i++)
{
if(b[i] != '0' && b[i] != '1')
{
return (0);
}
else if (b[i] == '1')
{
result += (1 << i);
}
}
return (result);
}
