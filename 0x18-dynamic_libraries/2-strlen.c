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
	int i;

	for (i = 0; *s != '\0'; s++)
	{
		i++;
	}
	return (i);
}
