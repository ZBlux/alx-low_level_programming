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
	listint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		printf("%d ", current->n);
		count++;
		current = current->next;
	}

	printf("\n");
	return (count);
}
