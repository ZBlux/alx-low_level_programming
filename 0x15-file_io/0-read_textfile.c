#include "main.h"

/**
 *read_textfile- a function that reads a text file and prints
 *		it to POSIX stout
 *
 *@filename: is the file to read
 *@letters: number of letters to read
 *
 *Return: 0 or written_f
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	char *buffer;
	ssize_t read_f, written_f;

	if (filename == NULL)
		return (0);

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);

	buffer = malloc(letters + 1);
	if (buffer == NULL)
	{
		close(f);
		return (0);
	}

	read_f = read(f, buffer, letters);
	if (read_f == -1)
	{
		free(buffer);
		close(f);
		return (0);
	}

	written_f = write(STDOUT_FILENO, buffer, read_f);
	free(buffer);
	close(f);

	if (written_f != read_f)
		return (0);

	return (written_f);
}
