#include "main.h"

/**
 *print_array- prints aray
 *
 *@a: wana mali
 *@n: ikhan
 */
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		return;
	}

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
		{
			printf("%d\n", *(a + i));
		}
		else
			printf("%d, ", *(a + i));
	}
}
