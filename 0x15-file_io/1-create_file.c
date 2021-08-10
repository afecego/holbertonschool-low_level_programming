#include "main.h"

/**
 * create_file - create a file
 * @filename: Name of file to create
 * @text_content: Text in the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int on, i;

	if (filename == NULL)
	{
		return (-1);
	}

	on = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (on == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
		{
			;
		}
		write(on, text_content, i);
	}

	close(on);
	return (1);

}
