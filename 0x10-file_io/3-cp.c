#include <stdio.h>
#include <stdio.h>

/**
 * cls - closes a file descriptor gently"
 * @fd: the file descriptor
 */
void cls(int fd)
{
	int res;

	res = close(fd);
	if (res == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file
 * @argc: arguments count
 * @argv: arguments values
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int fdr, fdw, more = 1, done;
	char *buf = malloc(1024 * sizeof(char));

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}
	fdr = open(argv[1], O_RDONLY);
	fdw = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while (more)
	{
		more = read(fd, buf, 1024);
		if (fdr == -1 || more == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			return (98);
		}
		done = write(fdw, buf, more);
		if (fdw == -1 || done == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			return (99);
		}
	}
	cls(fdr)
	cls(fdw);
	return (0);
}
