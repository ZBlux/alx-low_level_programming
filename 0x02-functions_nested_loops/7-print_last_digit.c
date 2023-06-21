#include "main.h"
#include <stdio.h>
/**
 *print_last_digit- function that prints last digit
 *
 *@n: number
 *
 *Return: last digit
 */
int print_last_digit(int n)
{
	int ls;

	ls =  n % 10;

	if (ls < 0)
		ls = -ls;
	_putchar('0' + ls);
	return (ls);
}
