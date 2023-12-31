#include "main.h"

/**
 *_strcmp- function that compares two strings
 *
 *@s1: string one
 *@s2: string two
 *
 *Return: s1-s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i]; i++)
	{
		if (s1[i] == '\0' || s2[i] == '\0')
		{
			return (0);
		}
	}
	return (s1[i] - s2[i]);
}
