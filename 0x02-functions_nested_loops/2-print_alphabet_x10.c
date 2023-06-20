#include "main.h"
/**
 *print_alphabet_x10- prints ten times.
 */
void print_alphabet_x10(void)
{
	int count = 0;

	while (count < 10)
	{
		print_alphabet();
		count++;
		-putchar('\n');
	}
}
