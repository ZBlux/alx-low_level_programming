#include "function_pointers.h"

/**
 *int_index- function that searches for int
 *
 *@array: array
 *@size: size of array
 *@cmp: pointer of a function to be used
 *
 *Return: -1, i
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
