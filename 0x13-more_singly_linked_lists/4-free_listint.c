#include "lists.h"
#include <stdio.h>

/**
 * free_listint - Function that frees
 * @head: Pointer to the head
 * no return
 */

void free_listint(listint_t *head)
{
	listint_t *zed;

	while (head)
	{
		zed = (*head).next;
		free(head);
		head = zed;
	}
}
