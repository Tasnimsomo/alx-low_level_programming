#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 if the file exists and -1 if the file does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
int i;
int file;
if (filename == NULL)
{
return (-1);
}
if (text_content == NULL)
{
text_content = "";
}
file = open(filename, O_WRONLY | O_APPEND);
if (file == -1)
return (-1);
i = 0;
while (text_content[i] != '\0')
{
i++;
}
write(file, text_content, i);
return (1);
}
