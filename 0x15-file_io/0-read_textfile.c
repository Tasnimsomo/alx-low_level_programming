#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: name of the file
 * @letters:  number of letters to be printed
 *
 * Return: number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t file, r, w;
char *text;
text = malloc(letters);
if (text == NULL)
return (0);
if (filename == NULL)
return (0);
file = open(filename, O_RDONLY);
if (file == -1)
{
free(text);
return (0);
}
r = read(file, text, letters);
w = write(STDOUT_FILENO, text, let);
close(file);
return (w);
}
