#include "main.h"

/**
 *main- multi two numbers
 *
 *@argc: number of command line arguments
 *@argv: array name
 *
 *Return: 0 or 1 if Error
 */
int main(int argc, char *argv[])
{
	int i, j, mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	mult = i * j;
	printf("%d\n", mult);

	return (0);
}
