#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Pointer to a pointer to the head of the linked list.
 * @str: String to be duplicated and stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	if (head == NULL || str == NULL)
		return (NULL);	/* Invalid input parameters */

	if (new_node == NULL)
		return (NULL);	/* Memory allocation failed */

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);	/* Memory allocation for the string failed */
		return (NULL);
	}

	new_node->len;
	new_node->next = NULL;	/* The new node will be the last, so its next is NULL */

	if (*head == NULL)
		*head = new_node;	/* If the list is empty, the new node becomes the head */
	else
	{
		list_t *current = *head;

		while (current->next != NULL)
			current = current->next;	/* Traverse the list until the last node is reached */
		current->next = new_node;	/* Set the next pointer of the last node to the new node */
	}

	return new_node;
}

