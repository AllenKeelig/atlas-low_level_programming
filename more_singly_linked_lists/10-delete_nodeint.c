#include <stddef.h>
#include <stdlib.h>
#include "lists.h"  // Include your listint_t structure header file

/**
 * delete_nodeint_at_index - Deletes the node at a given position
 * @head: Pointer to a pointer to the head of the listint_t list.
 * @index: Index of the node that should be deleted. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current, *temp;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = *head;
	while (current != NULL)
	{
		if (count == index - 1)
		{
			if (current->next == NULL)
			{
				return (-1);
			}

			temp = current->next;
			current->next = current->next->next;
			free(temp);
			return (1);
		}

		current = current->next;
		count++;
	}

	return (-1);
}
