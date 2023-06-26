#include "main.h"

/**
 *swap_int- swap two integers
 *
 *@a: integer
 *
 *@b: integer
 */
void swap_int(int *a, int *b)
{
	*a = (*a - *b);
	*b = (*a + *b);
	*a = (*b - *a);
}
