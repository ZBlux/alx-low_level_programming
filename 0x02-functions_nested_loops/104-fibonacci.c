#include <stdio.h>
/**
 *main- the entry point
 *
 *Return: 0
 */

int main(void)
{
	float f1, f2, fn;
	int c;

	f1 = 1;
	f2 = 2;

	printf("%.0f, %.0f", f1, f2);

	for (c = 3; c <= 98; c++)
	{
		fn = (f1 + f2);
		printf(", %.0f", fn);

		f1 = (f2);
		f2 = (fn);
	}

	printf("\n");

	return (0);
}
