#include "lists.h"

/**
 *add_nodeint_end - function that adds a node to the bottom
 *
 *@head: pointer
 *@n: value for new node
 *
 *Return: pointer to new
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *node;

	if (!head || !new)
		return (NULL);

	new->next = NULL;
	new->n = n;
	if (!*head)
		*head = new;
	else
	{
		node = *head;
		while (node->next)
			node = node->next;
		node->next = new;
	}
	return (new);
}
