#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index of a dlistin
 * @head: Pointer to a pointer to the head of the doubly linked list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if the deletion succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	while (i < index && current != NULL)
	{
		current = current->next;
		i++;
	}

	if (current == NULL)
		return (-1);

	current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;
	free(current);
	return (1);
}
