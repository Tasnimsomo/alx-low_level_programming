#include "main.h"

/**
 * unsigned int binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string either 0 or 1
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
size_t length = strlen(b);
int i;
unsigned int result = 0;
for (size_t i = 0; i < length; i++)
{
if (b[i] != '0' && b[i] != '1')
{
return 0;
}
else if (b[i] == '1')
{
result += (1 << i);
}
}
return result;
}
