#include "main.h"

/**
 *create_file- a function that creates a file
 *
 *@filename: name of file to create
 *@text_content: string to write to file
 *
 *Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int f;
	ssize_t written_f;

	if (filename == NULL)
		return (-1);

	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (f == -1)
		return (-1);

	if (text_content != NULL)
	{
		written_f = write(f, text_content, strlen(text_content));
		if (written_f == -1)
		{
			close(f);
			return (-1);
		}
	}

	close(f);
	return (1);
}
