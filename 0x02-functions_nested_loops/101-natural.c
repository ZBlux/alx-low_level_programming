#include <stdio.h>

/**
 * main- the entry point
 * Return: 0
 */

int main(void)
{
	int n;
	int s;

	s = 0;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			s += n;
		}
	}
	printf("%d\n", sum);

	return (0);
}
