#include <stdio.h>
/**
 *main- the entry point
 *
 *Description: reverse alphabet.
 *
 *Return: 0
 */
int main(void)
{
	char cd;

	for (cd = 'z'; cd <= 'a'; cd--)
	{
		putchar(cd);
	}
	putchar('\n');
	return (0);
}
