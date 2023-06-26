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
 *print_rev- prints in reverse
 *
 *@s: string
 *
 */

void print_rev(char *s)
{
	int j;

	for (j = _strlen(s); j >= 0; j--)
	{
		_putchar(s[j]);
	}

}
