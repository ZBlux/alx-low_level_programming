#include "main.h"


/**
 *_memset- function that fills memory with constant
 *
 *@s: pointer to the memory
 *@b: constant byte
 *@n: fist bytes
 *
 *Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
