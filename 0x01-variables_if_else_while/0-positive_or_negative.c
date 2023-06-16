#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - the entry point
 *
 * Description: This is the entry point.
 *              It returns 0 .
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* this prints if the number is + or - or 0 */
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is positive\n", n);
	return (0);
}
