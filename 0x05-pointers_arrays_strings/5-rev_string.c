#include "main.h"

/**
 *_strlen- lenght of string
 *
 *@s: string
 *
 * Return: lenght of s
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
	{
		i++;
	}
	return (i);
}
/**
 *rev_string- prints in reverse
 *
 *@s: string
 *
 */

void rev_string(char *s)
{
	int j;

	for (j = _strlen(s) - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
