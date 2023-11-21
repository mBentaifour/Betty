#include "lists.h"
#include <stdio.h>

/**
* free_listint2 - Function that frees
* @head: Pointer to the head
*
* return if head == NULL
*/

void free_listint2(listint_t **head)
{
	listint_t *zzed, *lfree;

	if (head == NULL)
		return;
	lfree = *head;
	while (lfree != NULL)
	{
		zzed = lfree;
		lfree = (*lfree).next;
		free(zzed);
	}
	*head = NULL;
}
