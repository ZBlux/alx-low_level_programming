#include "main.h"

/**
 *string_toupper- switch to upper
 *
 *
 *Return: c
 */
char *string_toupper(char *)
{
	int i;
	char c;

	for (i = 0; c <= 'z' && c >= 'a'; i++)
	{
		c[i] = c[i] - 32;
	}
	return (c);
}
