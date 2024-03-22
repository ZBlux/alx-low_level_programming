#include "lists.h"

/**
 *dlistint_len- function that prints all elements
 *
 *@h: head
 *
 *Return: n
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
