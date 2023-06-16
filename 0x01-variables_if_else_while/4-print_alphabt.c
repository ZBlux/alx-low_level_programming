#include <stdio.h>

/**
 * main - The entry point
 *
 * Description: Prints the alphabet in lowercase, but 'q' and 'e'.
 *
 * Return: 0
 */
int main(void)
{
	char cr;

	for (cr = 'a'; cr <= 'z'; cr++)
	{
		if (cr == 'q' || cr == 'e')
			putchar(cr);
	}
	putchar('\n');
	return (0);
}
