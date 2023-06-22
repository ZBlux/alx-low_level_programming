#include "main.h"
/**
 *_isupper- checks if upper case.
 *
 *@c: character to check.
 *
 *Return:0 if not upper.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
