#include "main.h"

/**
 *_strchr - function that locate a character in a string
 *
 *@s: string
 *@c: character
 *
 *Return: first occurrence of c
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
