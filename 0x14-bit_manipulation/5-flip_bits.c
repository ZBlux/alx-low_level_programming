#include "main.h"

/**
 *flip_bits - function that returns the number of bits needed to flip
 *
 *@n: first number
 *@m: second number
 *
 *Return: number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_n_m = n ^ m;
	unsigned int count = 0;

	while (xor_n_m)
	{
		count += xor_n_m & 1;
		xor_n_m >>= 1;
	}

	return (count);
}
