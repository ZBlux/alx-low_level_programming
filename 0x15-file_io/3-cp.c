#include "main.h"

#define BUFFER_SIZE 1024

/**
 *print_error - Prints an error message to stderr.
 *@msg: The error message to be printed.
 */
void print_error(const char *msg);

/**
 *main- Copies the content of one file to another
 *
 *@argc: The number of arguments passed to the program
 *@argv: An array of strings containing the arguments
 *
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int source_fd, dest_fd;
	ssize_t nread, nwritten;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	source_fd = open(argv[1], O_RDONLY);
	if (source_fd == -1)
	{
		print_error("Error: Can't read from file");
		exit(98);
	}
	dest_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (dest_fd == -1)
	{
		print_error("Error: Can't write to file");
		close(source_fd);
		exit(99);
	}
	while ((nread = read(source_fd, buffer, BUFFER_SIZE)) > 0)
	{
		nwritten = write(dest_fd, buffer, nread);
		if (nwritten != nread)
		{
			print_error("Error: Can't write to file");
			close(source_fd);
			close(dest_fd);
			exit(99);
		}
	}
	if (close(source_fd) == -1 || close(dest_fd) == -1)
	{
		print_error("Error: Can't close fd");
		exit(100);
	}

	return (0);
}

/**
 *print_error - Prints an error message to stderr.
 *@msg: The error message to be printed.
 */
void print_error(const char *msg)
{
	dprintf(2, "%s\n", msg);
}
