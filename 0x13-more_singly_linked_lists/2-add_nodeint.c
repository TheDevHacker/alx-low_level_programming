#include "lists.h"

/**
 * add_nodeint - Adds new node at the start of a listint_t list
 * @head: A pointer to the address of the listint_t list.
 * @n: The integer for the new node
 *
 * Return: If fails - NULL Otherwise - address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
