#include "main.h"

/**
 *get_bit - returns the value of a bit at a given index
 *
 *@n: The number
 *@index: The index of the bit
 *
 *Return: bit, or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	mask <<= index;
	if ((n & mask) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
