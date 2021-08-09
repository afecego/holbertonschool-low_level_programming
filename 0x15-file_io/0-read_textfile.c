#include "main.h"

/**
 * read_textfile - read file and print
 * @filename: File
 * @letters: Number of letter to read and print
 * Return: Number of letters.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t bytes;

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL || filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	bytes = read(fd, buf, letters);
	write(STDOUT_FILENO, buf, bytes);

	if (fd == -1)
	{
		return (0);
	}
	free(buf);
	close(fd);
	return (bytes);
}
