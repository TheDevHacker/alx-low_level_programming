#include <stdlib.h>
#include "lists.h"

/**
 * lst_len - returns  elements in a linked list
 * @h: pointer
 *
 * Return: number of elements in h
 */
size_t lst_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
