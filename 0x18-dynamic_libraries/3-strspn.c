#include "main.h"

/**
 *_strspn- function that gets the length
 *	of a prefix
 *
 *@s: string
 *@accept: string
 *
 *Return: c
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				c = c + 1;
				break;
			}
			else if (accept[j + 1] == '\0')
			{
				return (c);
			}
		}
	}
	return (c);
}
