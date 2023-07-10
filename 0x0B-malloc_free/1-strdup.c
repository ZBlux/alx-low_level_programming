#include "main.h"

/**
 *_strdup- copy a string
 *
 *@str: string
 *
 *Return: the copy or NULL
 */
char *_strdup(char *str)
{
	char *p;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	p = malloc(sizeof(char) * (i + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (j = 0; j <= i; j++)
	{
		p[j] = str[j];
	}
	return (p);
}
