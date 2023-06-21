#include "main.h"
#include <stdio.h>
/**
 *times_table- jadwal darb
 *
 */
void times_table(void)
{
	int i, f, p;

	for (i = 0; i <= 9; i++)
	{
		for (f = 0; f <= 9; f++)
		{
			p = i * f;
			if (i != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (p <= 9 && f != 0)
				_putchar(' ');
			if (p >= 10)
			{
				_putchar('0' + (p / 10));
				_putchar('0' + (p % 10));
			}
		}
		_putchar('\n');
	}
}
