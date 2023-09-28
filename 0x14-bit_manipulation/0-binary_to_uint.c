#include <stddef.h> 
#include <stdbool.h>
#include "main.h"

unsigned int binary_to_uint(const char *b)
{
if (b == NULL)
{
return (0);
}
unsigned int result = 0;
bool valid_binary = true;
for (int i = 0; b[i] != '\0'; i++)
{
if (b[i] == '0')
{
result = (result << 1);
}
else if (b[i] == '1')
{
result = (result << 1) | 1;
}
else
{
valid_binary = false;
break;
}
}
if (!valid_binary)
{
return (0);
}
return (result);
}
