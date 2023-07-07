#include "main.h"

/**
 *main- prints number of arguments
 *
 *@argc: number of arguments passed
 *@argv: argument passed
 *
 *Return: 0
 */
int main(int argc, char *argv[])
{
	if (*argv)
	{
		printf("%d\n", argc - 1);
	}
	return 0;
}
