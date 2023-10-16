#include "main.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>

/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: name of the file
 * @letters:  number of letters to be printed
 *
 * Return: number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t bytesWritten;
char *buffer  (char *)malloc(letters  1);
if (filename == NULL)
{
return (0);
}
int fileDescriptor = open(filename, O_RDONLY);
if (fileDescriptor == -1)
{
return (0);
}
if (buffer == NULL)
{
close(fileDescriptor);
return (0);
}
ssize_t bytesRead = read(fileDescriptor, buffer, letters);
if (bytesRead == -1)
{
free(buffer);
close(fileDescriptor);
return (0);
}
bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
free(buffer);
close(fileDescriptor);
if (bytesWritten != bytesRead) {
return (0);
}
return (bytesWritten);
}
