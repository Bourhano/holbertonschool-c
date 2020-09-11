#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to read
 * @letters: the number of letters contained in the text to read
 *
 * Return: the actual number of letters that were read
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;

	if (filename == 0)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc((letters + 1) * sizeof(char));
	read(fd, buf, letters);
	buf[letters] = 0;
	close(fd);
	fd = 0;
	while (*buf != 0)
	{
		write(STDOUT_FILENO, buf++, 1);
		fd++;
	}
	if (*buf == 0)
		return (fd);
	else
		return (0);
}
