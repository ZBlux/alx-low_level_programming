#include <stdio.h>
/**
 *main- the entry point
 *
 *Return: 0
 */

int main(void)
{
	unsigned long int f1 = 1, f2 = 2, fn;
	int c;

	printf("%lu, %lu", f1, f2);

	for (c = 3; c <= 96; c++)
	{
		fn = f1 + f2;
		printf(", %lu", fn);
		f1 = f2;
		f2 = fn;
	}
	printf("\n");
	return (0);
}
