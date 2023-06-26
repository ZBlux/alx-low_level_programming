#include "main.h"

/**
 *print_rev- prints in reverse
 *
 *@s: string
 */

void print_rev(char *s)
{
	int j;

	for (j = _strlen(s); j >= 0; j--)
	{
		_putchar(s[j]);
	}

}
