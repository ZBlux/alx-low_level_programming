#include "main.h"

/**
 *string_nconcat- concanate two strings
 *
 *@s1: string
 *@s2: string
 *@n: uns int
 *
 *Return: p or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int i, j, a, b;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	if (n >= j)
	{
		n = j;
	}
	p = malloc(sizeof(char) * (i + n + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < i; a++)
	{
		p[a] = s1[a];
	}
	for (b = 0; b < n; b++)
	{
		p[a] = s2[b];
		a++;
	}
	p[a] = '\0';
	return (p);
}
