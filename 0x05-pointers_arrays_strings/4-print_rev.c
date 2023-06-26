#include "main.h"

/**
 *print_rev- prints in reverse
 *
 *@s: string
 */

void print_rev(char *s)
{
	int i;
	int j;

	j = _strlen(s);
	for (i = 0; j >= 0; j--)
	{
		_putchar(s[j]);
	}

}
