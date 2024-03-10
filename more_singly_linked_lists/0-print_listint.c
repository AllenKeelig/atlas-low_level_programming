#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
*print_listint- prints the contents of a list
*followed by new line
*@h:the head
*
*Return: then number of elements in the list
*/

size_t print_listint(const listint_t *h)
{
	size_t n = 0;
	const listint_t *printer_in = h;

	while (printer_in != NULL)
	{
		printf("%d\n", printer_in->n);
		printer_in = printer_in->next;
		n++;
	}
	return (n);
}
