#include "main.h"

/**
 *set_bit- sets a bit to 1 at index
 *
 *@n: the number
 *@index: where to set 1
 *
 *Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int y = 1;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	y <<= index;
	*n = (*n | y);
	return (1);
}
