#include "lists.h"

/**
* dlistint_len - a function returns the number of elements in a linked list
* @h: the beginning of a linked list
*
* Return: nodes numbers
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t leng;

	for (leng = 0; h != NULL; leng++)
		h = h->next;
	return (leng);
}
