#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file to create
 * @text_content: the text to write in the created file
 *
 * Return: 1 on success, -1 on failure
 **/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, count = 1;
	char *saved = text_content;

	if (filename == 0)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	while (*saved++ != 0)
		count++;
	if (text_content != 0)
		write(fd, text_content, count + 1);
	close(fd);
	return (1);
}
