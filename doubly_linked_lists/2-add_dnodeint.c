#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: Pointer to a pointer to the head of the doubly linked list.
 * @n: Integer value to be stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	size_t len = 0;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
		return (new);
	}
	while ((*head)->prev != NULL)
		*head = (*head)->prev;
	new->next = *head;
	(*head)->prev = new;
	*head = new;
	while (*head != NULL)
	{
		*head = (*head)->next;
		len++;
	}
	*head = new;
	return (*head);
}
