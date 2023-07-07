#include "main.h"

/**
 * main - prints arguments passed into main
 * @argc: number arguments
 * @argv: array name
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
