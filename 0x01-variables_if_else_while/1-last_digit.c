#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main- the entry point.
 *
 *Description:  this function is the entry point.
 *		it returns 0 .
 *Return: 0
 */
int main(void)
{
	int n;
	int lastd = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastd);
	else if (n == 0)
		printf("Last digit of %d is %d and is 0\n", n, lastd);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastd);
	return (0);
}
