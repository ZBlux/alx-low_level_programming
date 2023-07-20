#include "variadic_functions.h"

/**
 *sum_them_all- sums all the arguments given
 *
 *@n: the number of arguments to be summed
 *
 *
 *Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	int sum;

	va_start(arg, n);
	if (n == 0)
	{
		return (0);
	}
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg, int);
	}
	return (sum);
}
