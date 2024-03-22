#include "lists.h"

/**
 * print_dlistint - print doublylinked list
 * @h: address of head node
 *
 * Return: size of list
 */

size_t print_dlistint(const dlistint_t *h)
{
	int bug;

	bug = 0;

	if (h == NULL)
		return bug;

	while (h->prev != NULL)
		h=h->prev;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		bug ++;
		h = h->next;
	}
	return (bug);
}
