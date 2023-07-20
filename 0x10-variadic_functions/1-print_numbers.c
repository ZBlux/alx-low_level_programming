#include "variadic_functions.h"

/**
 *print_numbers- prints numbers with separator
 *
 *@separator: string
 *@n: number of arguments
 *
 *Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;

	va_start(arg, n);
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(arg, int));
			if (i < n - 1)
			{
				printf("%s", separator);
			}
		}
		printf("\n");
	}
}
