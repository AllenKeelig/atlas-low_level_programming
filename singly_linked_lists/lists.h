#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - A structure representing a linked list node.
 * @str: Pointer to a string (or NULL if no string is present).
 * @len: Length of the string (or 0 if no string is present).
 * @next: Pointer to the next node in the linked list or NULL if the last node
 *
 * Description: This structure defines a node in a singly linked list.
 * Each node contains a string, its length, and a pointer to the next node.
 */

typedef struct list_s
{
	char *str;
	size_t len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);


#endif /* LISTS_H */

