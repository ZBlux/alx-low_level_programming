#include "function_pointers.h"

/**
 *array_iterator- fucntion that executes a function called action
 *given as a parameter on each element of the array
 *
 *@array: array
 *@size: size of the array
 *@action: pointer to a function to use
 *
 *Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if ((size == 0 || array == NULL) || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
