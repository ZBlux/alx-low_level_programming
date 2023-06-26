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
 *puts_half- prints half
 *
 *@str: string
 */

void puts_half(char *str)
{
	int j;

	j = _strlen(str) / 2;

	for (j = j - 1; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
