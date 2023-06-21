#include "main.h"
/**
 *print_sign- checks sign.
 *
 *@n: the number to check.
 *
 *Return: 1 if pos, -1 if neg , 0 if 0 .
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
	else
	{
		return (0);
		_putchar('0');
	}
}
