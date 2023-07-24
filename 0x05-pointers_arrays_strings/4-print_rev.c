#include "main.h"

/**
 * print_rev - prints string in reverse *
 * @str: char to check
 *
 * Return: 0 is success
 */

void _puts(char *str) 
{
char *end = str; 
while (*end != 0)
{
end++;
}
end--;  
while(str < end)
{
_putchar(*end);         
end--;                 
}        
_putchar('\n');
}
