#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of two digits.
 *
 * Return: 0
 */
int main(void)
{
	int f, s;

	for (f = 0; f <= 8; f++)
	{
		for (s = f + 1; s <= 9; s++)
		{
			putchar(f + '0');
			putchar(s + '0');
			if (f < 8 || s < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
