#include "main.h"
/**
 *_islower- checks if lower case.
 *
 *@c: character to check.
 *
 *Return:0 if not lower.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
