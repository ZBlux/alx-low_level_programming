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
/**
 *_calloc - allocates memory for an array
 *@nmemb: the number of elements
 *@size: the size
 *Return: p or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (!p)
	{
		return (NULL);
	}
	__memset(p, 0, nmemb * size);
	return (p);
}
