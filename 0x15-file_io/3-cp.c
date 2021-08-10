#include "main.h"
/**
 * main - check the code
 * @argc: cant arguments int
 * @argv: pointer to info de argc
 * Return: exit.
 */
int main(int argc, char **argv)
{
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
copy(argv[1], argv[2]);
exit(0);
}

#include "main.h"
/**
 * copy - funtion for copy files
 * @file_from: file intial
 * @file_to: file whit the copy
 * Return: Always 0.
 */
void copy(const char *file_from, const char *file_to)
{
	int fd, bytes;
	char buffer[1024];
	int copyfd;

	fd = open(file_from, O_RDONLY);

	if (file_from == NULL || fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	copyfd = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	bytes = read(fd, buffer, 1024);

	while (bytes > 0)
	{
		if (write(copyfd, buffer, bytes) != bytes || copyfd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}

	if (close(copyfd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", copyfd);
		exit(100);
	}

	if (bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
}
