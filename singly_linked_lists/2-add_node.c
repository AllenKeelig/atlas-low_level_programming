#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Pointer to a pointer to the head of the linked list.
 * @str: String to be duplicated and stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	size_t len = 0;

	if (head == NULL || str == NULL) {
		return NULL;	/* Invalid input parameters */
	}

	if (new_node == NULL) {
		return NULL;	/* Memory allocation failed */
	}
	
	while (str[len] != '\0')
	{
		len++;
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL) {
		free(new_node);	/* Memory allocation for the string failed */
		return NULL;
	}

	new_node->len = len;
	new_node->next = *head;	/* Set the next pointer to the current head */
	*head = new_node;		/* Update the head to point to the new node */

	return new_node;
}
