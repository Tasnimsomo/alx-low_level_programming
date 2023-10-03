#include "main.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
ssize_t read_textfile(const char *filename, size_t letters)
{
  if (filename == NULL)
    {
      return (0);
    }
  int fileDescriptor = open(filename, O_RDONLY);
  if (fileDescriptor == -1)
    {
      return (0);
    }
  char *buffer  (char *)malloc(letters  1);
  if (buffer == NULL)
    {
      close(fileDescriptor);
      return (0);
    }
   ssize_t bytesRead = read(fileDescriptor, buffer, letters);
    if (bytesRead == -1) {
        free(buffer);
        close(fileDescriptor);
        return 0;
    }

    ssize_t bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
    free(buffer);
    close(fileDescriptor);

    if (bytesWritten != bytesRead) {
        return 0;
    }

    return bytesWritten;
}
