#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints listint_t elements.
 * @h: A pointer.
 *
 * Return: Number of nodes in linked list_t list.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
