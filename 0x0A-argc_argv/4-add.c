#include "main.h"

/**
 *main- add numbers
 *
 *@argc: number of arguments
 *@argv: array name
 *
 *Return: result or 0 if no number or 1 if Error
 */
int main(int argc, char *argv[])
{
	int i, j, l, result;
	char *p;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	result = 0;
	for (i = 1; i < argc; i++)
	{
		p = argv[i];
		l = strlen(p);
		for (j = 0; j < l; j++)
		{
			if (!isdigit(p[j]))
			{
				printf("Error\n");
				return (1);
			}
			result = result + atoi(argv[i]);
		}
	}
	printf("%d\n", result);
	return (result);
}
