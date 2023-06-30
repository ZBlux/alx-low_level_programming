#include "main.h"

/**
 *reverse_array- function that reverses
 *the content of an array
 *
 *@a: array
 *@n: number of the elements of the array
 *
 */
void reverse_array(int *a, int n)
{
	int i, j, x;

	j = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		x = a[i];
		a[i] = a[j - i];
		x = a[j - i];
	}
}
