#include <stdio.h>
/**
 *main- the entry point
 *
 *Description:  prints the alphabet in lowercase.
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
	putchar('\n');
	return (0);
}
