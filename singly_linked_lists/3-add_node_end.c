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
	size_t len = 0;
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
	/* Calculate the length of the string manually */
	while (str[len] != '\0')
	{
		len++;
	}

	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		list_t *current = *head;

		while (current->next != NULL)
			current = current->next;
		current->next = new_node;
	}

	return (new_node);
}

