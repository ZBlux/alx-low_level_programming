#include <stdio.h>
/**
 *main- the entry point
 *
 *Return: 0
 */

int main(void)
{
	long int f1, f2, fn;
	int c;

	f1 = 1;
	f2 = 2;

	printf("%ld, %ld", f1, f2);

	for (c = 3; c <= 50; c++)
	{
		fn = (f1 + f2);
		printf(", %ld", fn);

		f1 = (f2);
		f2 = (fn);
	}

	printf("\n");

	return (0);
}
