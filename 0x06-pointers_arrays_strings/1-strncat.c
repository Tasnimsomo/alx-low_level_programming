#include "main.h"

/**
 *strncat - concatenates two strings.
 *@dest -destination 
 *@src - source
 *@n - number of bytes
 *Return: pointer to resulting string dest
 */

char *_strncat(char *dest, char *src, int n) {
while (*dest) {
dest++;
}
int i = 0;
while (*src && i < n) {
*dest = *src;
dest++;
src++;
i++;
}
*dest = '\0';
return dest;
}
