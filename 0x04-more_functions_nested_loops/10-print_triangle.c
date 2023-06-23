#include "main.h"
/**
 *print_square- prints triangle
 *
 *@size: size of triangle
 */
void print_triangle(int size)
{
	int i, j, s, h;


	if (size > 0)
	{
		for (i = 0; i < size; i++)
	{
		s = size - i - 1;
		h = i + 1;

		for (j = 0; j < s; j++)
			_putchar(' ');

		for (j = 0; j < h; j++)
			_putchar('#');
	}
	else
		_putchar('\n');
}
