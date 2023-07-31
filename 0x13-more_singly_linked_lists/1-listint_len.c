#include "lists.h"

/**
 *listint_len- function that returns the number of elements
 *
 *@h: pointer of  head
 *
 *Return: count
 */

size_t listint_len(const listint_t *h)
{
	listint_t *current = h;
	int count = 0;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);
}
