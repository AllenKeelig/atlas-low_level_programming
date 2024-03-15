#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to a pointer to the head of the doubly linked list.
 * @idx: Index of the list where the new node should be added.
 * @n: Integer value to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *new_node;
	unsigned int i;

	if (idx == 0)
	return (add_dnodeint(h, n));  /* Insert at the beginning */
	current = *h;
	for (i = 0; i < idx - 1 && current != NULL; i++)
		current = current->next;  /* Traverse to the node before the index */

	if (current == NULL)
		return (NULL);  /* Index out of range */

	if (current->next == NULL)
		return (add_dnodeint_end(h, n));  /* Insert at the end */

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);  /* Memory allocation failed */

	new_node->n = n;
	new_node->prev = current;
	new_node->next = current->next;
	current->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}
