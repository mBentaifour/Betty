#include "lists.h"
#include <stdio.h>

/**
 * listint_len -  returns the numbers of elements
 * @h: Pointer to the head of list_t list
 *
 * Return: number of listint_t list
 */

size_t listint_len(const listint_t *h)
{
	size_t killnode = 0;

	while (h)
	{
		killnode++;
		h = (*h).next;
	}
	return (killnode);
}
