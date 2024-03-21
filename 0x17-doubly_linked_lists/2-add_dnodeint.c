#include "lists.h"

/**
 * add_dnodeint - adds new node at begining of a doubly linked list.
 * @head: points to head of list.
 * @n: data to be added.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	/* allocates the memory for new node */
	new_node = malloc(sizeof(dlistint_t));

	/* return NULL if fails */
	if (new_node == NULL)
		return (NULL);

	/* assigns data to new node */
	new_node->n = n;

	/* points the next of newNode to the first node of the doubly linked list */
	new_node->next = *head;

	/* points the previous of new node to NULL */
	new_node->prev = NULL;

	/* points the previous of 1st node (now 1st node is the second node) to new node */
	if ((*head) != NULL)
		(*head)->prev = new_node;

	/* head points to newNode */
	(*head) = new_node;

	return (new_node);
}
