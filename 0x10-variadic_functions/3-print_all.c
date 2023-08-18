#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

/**
 *print_all- prints anything.
 *@format:list of types of arguments.
 *Return: nothing.
 */
void print_all(const char* const format, ...)
{
va_list args;
va_start(args, format);
const char* ptr = format;
while (*ptr != '\0') {
if(*ptr == 'c') {
char c = (char)va_arg(args, int);
 printf("%c", c);
}
else if (*ptr == 'i') {
int i = va_arg(args, int);
printf("%d", i);
}
else if (*ptr == 'f') {
float f = (float)va_arg(args, double);
printf("%f", f);
}
else if (*ptr == 's') {
char* s = va_arg(args, char*);
if (s == NULL)
printf("(nil)");
else
printf("%s", s);
}
ptr++;
}
va_end(args);
printf("\n");
}
