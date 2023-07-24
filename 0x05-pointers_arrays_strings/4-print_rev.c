#include "main.h"

/**
 * print_rev - prints string in reverse *
 * @str: char to check
 *
 * Return: 0 is success
 */

void print_rev(char *s) 
{
char *end = s; 
while (*end != 0)
{
end++;
}
end--;  
while(s < end)
{
_putchar(*end);         
end--;                 
}        
_putchar('\n');
}
