#include "lists.h"

/**
 * sum_dlistint - returns the sum of the data (n) of a linked list.
 * @head: points to head of linked list.
 *
 * If the list is empty, return 0.
 *
 * Return: The sum.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	/* while we have a pointer to the list */
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
