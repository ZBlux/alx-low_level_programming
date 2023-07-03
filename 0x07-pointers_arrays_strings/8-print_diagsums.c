#include "main.h"

/**
 *print_diagsums- sum of two diagnals fo square martix
 *
 *@a: array
 *@size: size of the sum
 *
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i <= (size * size); i++)
	{
		sum1 = sum1 + *(a + i);
		i = i + size;
		printf("%d\n", sum1);
	}
	for (j = (size * size) - size; j >= 0; j++)
	{
		sum2 = sum2 + *(a + j);
		j = j - size;
		printf("%d\n", sum2);
	}
	printf("%d, %d\n", sum1, sum2);
}
