#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int found;   
while (*s != '\0')
{
found = 0;
for (int i = 0; accept[i] != '\0'; i++)
{
if (*s == accept[i])
{
count++;
found = 1;
break;
}
}      
if (found == 0)
{
break;
}      
s++;
}   
return count;
}
