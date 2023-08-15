#include <stdio.h>
#include <unistd.h>

/**
 *main - prints arguments
 *
 *@ac: number of items in av
 *@av: NULL terminated array of strings
 *
 *Return: 0
 */
int main(int ac, char **av)
{
	int i = 1;

	while (av[i] != NULL)
	{
		printf("argument %u: %s\n", i, av[i]);
		i++;
	}
	return (0);
}
