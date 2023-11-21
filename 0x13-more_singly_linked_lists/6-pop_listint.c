#include "lists.h"
#include <stdlib.h>

/**
* pop_listint - pops off the head of the list
* @head: head of the list
* Return: if the linked list is empty return 0
*/

int pop_listint(listint_t **head)
{
	int pp;
	listint_t *zzed, *redd;

	if (head == NULL)
		return (0);
	zzed = redd = *head;
	if (*head)
	{
		pp = (*zzed).n;
		*head = (*zzed).next;
		free(redd);
	}
	else
		pp = 0;
	return (pp);
}
