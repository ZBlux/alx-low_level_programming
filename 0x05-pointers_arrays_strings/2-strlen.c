#include "main.h"
/**
 *_strlen- lenght of a string
 *
 *@s: string
 *
 *Return: lenght of a s
 */
int _strlen(char *s)
{
	int len;

	while (*s != '/0')
	{
		len++;
		s++;
	}
	return (len);
}
