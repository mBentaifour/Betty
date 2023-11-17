#include "lists.h"

/**
* list_len - a number of elements in a linked list_t list
* @h: member of the structure
*
* Return: number in a linked list_t
*/

size_t list_len(const list_t *h)
{
	size_t z = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		z++;
		h = h->next;
	}
	return (z);
}
