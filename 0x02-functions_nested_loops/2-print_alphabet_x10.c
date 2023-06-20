#include "main.h"
/**
 *print_alphabet_x10- prints ten times.
 */
void print_alphabet_x10(void)
{
	int count = 0;

	while (count < 10)
	{
		char let = 'a';

		while (let <= 'z')
		{
			_putchar(let);
			let++;
		}
		count++;
		_putchar('\n');
	}
}
