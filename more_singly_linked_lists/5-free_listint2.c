#include <stdlib.h>
#include "lists.h"

/**
 *free_listint2- frees a linked listint_t list
 *@head: the fuckin head
 */

void free_listint2(listint_t **head)
{
	listint_t *traveller;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		traveller = *head;
		*head = (*head)->next;
		free(traveller);
	}
}
