#include <stdio.h>
#include <stdlib.h>

/**
 *main- read what you wrote
 *
 *return: 0
 */

int main(void)
{
	size_t bufsize = 1024;
	char *buffer = malloc(bufsize);
	ssize_t read;

	if (buffer == NULL)
	{
		return (1);
	}
	while (1)
	{
		printf("$ ");
		read = getline(&buffer, &bufsize, stdin);
		if (read == -1)
		{
			break;
		}
		printf("%s", buffer);
	}
	free(buffer);
	return (0);
}

