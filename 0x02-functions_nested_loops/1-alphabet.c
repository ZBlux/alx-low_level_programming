#include "main.h"

/**
 *Print_alphabet- lower case
 */
void print_alphabet(void)
{
	char let;

	for(let = 'a'; let <= 'z'; let++)
	{
		_putchar(let);
	}
	_putchar('\n');
}