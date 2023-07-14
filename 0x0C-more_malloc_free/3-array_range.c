#include "main.h"

/**
 *array_range -  creates an array of integers.
 *@min: minimum number
 *@max: maximum number
 *Return: p or NULL
 */

int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc((max - min + 1) * sizeof(int));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}
