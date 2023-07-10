#include "main.h"

/**
 *str_concat- concatenates two strings
 *
 *@s1: string
 *@s2: string
 *
 *Return: Null or p
 */

char *str_concat(char *s1, char *s2)
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
	p = malloc(sizeof(char) * (i + j + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < i; a++)
	{
		p[a] = s1[a];
	}
	for (b = 0; b < j; b++)
	{
		p[a] = s2[b];
		a++;
	}
	p[a] = '\0';
	return (p);
}
