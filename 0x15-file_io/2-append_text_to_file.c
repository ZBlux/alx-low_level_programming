#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>

/**
 *append_text_to_file- a funcion that appends text at the end
 *			of a file
 *
 *@filename: file to add data to
 *@text_content: text content to add to file
 *
 *Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	ssize_t written_f;

	if (filename == NULL)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);
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
