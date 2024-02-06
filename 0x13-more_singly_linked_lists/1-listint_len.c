#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Returns elements number in linked list
 * @h: A pointer
 *
 * Return: Number of elements in listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
