#include  "main.h"

/**
 * read_textfile - reads a text file and prints
 * @filename: name of file you want to read from
 * @letters:  number of letters it should read and print
 * Return: always success
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int file;
char *buffer;
ssize_t bytesRead;
ssize_t bytesWritten;
if (filename == NULL)
{
return (0);
}
file = open(filename, O_RDONLY);
if (file == -1)
{
return (0);
}
buffer = (char *)malloc(letters);
if (buffer == NULL)
{
close(file);
return (0);
}
bytesRead = read(file, buffer, letters);
if (bytesRead <= 0)
{
close(file);
free(buffer);
return (0);
}
buffer[bytesRead] = '\0';
bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
if (bytesRead != bytesWritten)
{
close(file);
free(buffer);
return (0);
}
close(file);
free(buffer);
return (bytesWritten);
}
  
