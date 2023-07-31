#include "list.h"

/**
 *print_listint- function that prints all elements of linked list
 * and returns the number of elements
 *
 *@h: pointer of  head
 *
 *Return: count
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
