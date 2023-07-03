#include "main.h"

/**
 *_strchr - function that locate a character
 *
 *@s: string
 *@c: character
 *
 *Return: s+1 or NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + 1);
		}
	}
	return ('\0');
}
