#include "main.h"
/**
 *_isdigit- checks if digit.
 *
 *@c: character to check.
 *
 *Return:0 if not digit.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
