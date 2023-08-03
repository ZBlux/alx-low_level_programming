#include "main.h"

/**
 *clear_bit- sets a bit to 0 at index
 *
 *@n: the number
 *@index: where to set 0
 *
 *Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int y = 1;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	y <<= index;
	*n = (*n & ~y);
	return (1);
}
