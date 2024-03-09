#include <stdio.h>
#include <stddef.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%s\n", h->str != NULL ? h->str : "[0] (nil)");
		h = h->next;
		count++;
	}

	return count;
}
