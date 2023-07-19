#include "function_pointers.h"

/**
 *print_name- function that prints name with the help
 *of another function
 *
 *@name: pointer of name
 *@f: pointer of function f
 *
 *Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
	{
		return;
	}
	f(name);
}
