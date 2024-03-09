#include <stdio.h>
#include <stddef.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("[%c] %s\n", h->str != NULL ? h->str : "(nil)");
		h = h->next;
		count++;
	}

	return count;
}
