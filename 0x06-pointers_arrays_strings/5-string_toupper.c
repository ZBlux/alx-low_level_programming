#include "main.h"

/**
 *string_toupper- switch to upper
 *
 *@s: string
 *
 *Return: s
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s <= 'z' && s >= 'a'; i++)
	{
		s[i] = s[i] - 32;
	}
	return (s);
}
