#include "main.h"

/**
 *create_array- function that create array
 *
 *@size: size
 *@c: character
 *
 *Return: s or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *s;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		s = malloc(sizeof(char) * size);
		memset(s, c, size);
	}
	return (s);
}
