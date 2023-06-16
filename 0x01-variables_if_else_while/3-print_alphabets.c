#include <stdio.h>

/**
 * main - The entry point
 *
 * Description: Prints the alphabet in one line.
 *
 * Return: 0
 */
int main(void)
{
	char cr;

	for (cr = 'a'; cr <= 'z'; cr++)
	{
		putchar(cr);
	}
	for (cr = 'A'; cr <= 'Z'; cr++)
	{
		putchar(cr);
	}
	putchar('\n');
	return (0);
}
