#include "main.h"

/**
 * append_text_to_file - check the code
 * @filename: Name of file to create
 * @text_content: Text in the file
 * Return: Always 0.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, on;

	if (filename == NULL)
	{
		return (-1);
	}

	on = open(filename, O_RDWR | O_APPEND);

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
