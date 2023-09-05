#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string.
 * Return: returns a pointer to a newly allocated space in memory
 */
char *_strdup(char *str)
{
size_t length;
char *copy;
if (str == NULL)
{
return (NULL);
}
length = strlen(str);
copy = (char *)malloc((length + 1) * sizeof(char));
if (copy == NULL)
{
return (NULL);
}
strcpy(copy, str);
return (copy);
}
