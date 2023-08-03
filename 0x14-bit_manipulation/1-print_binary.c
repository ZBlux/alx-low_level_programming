#include "main.h"

/**
 *print_binary_recursive- Helper function to print the binary recursively
 *
 *@n: The number
 */
void print_binary_recursive(unsigned long int n)
{
	if (n == 0)
	{
		return;
	}

	print_binary_recursive(n >> 1);
	_putchar((n & 1) + '0');
}

/**
 *print_binary - Prints the binary representation of a number
 *
 *@n: The number
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		print_binary_recursive(n);
	}
}
