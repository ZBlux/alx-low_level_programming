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

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s <= 'z' && s >= 'a')
		{
		s[i] = s[i] - 32;
		}
	}
	return (s);
}
