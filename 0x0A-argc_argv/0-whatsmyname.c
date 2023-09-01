#include "main.h"
#include <stdio.h>

/**
 *main-prints name of file followed by new line.
 *argc: argument count.
 *argv: arguments passed to main as array of strings.
 *Return : 0
 */
int main(int argc, char *argv[])
{
(void) argc;
printf("%s\n", argv[0]);
return (0);
} 
