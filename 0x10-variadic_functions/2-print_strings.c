#include "variadic_functions.h"

/**
 *print_strings- prints string with separator
 *
 *@separator: string
 *@n: number of arguments
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	char *p;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(arg, char*);
		if (p != NULL)
		{
			printf("%s", p);
		}
		else
		{
			printf("(nill)");
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(arg);
}
