#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* delete_nodeint_at_index - function that deletes the node at index index
* @head: Head of list
* @index: Location of node to delete
* Return: Returns: 1 if it succeeded, -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int nnod;
	listint_t *temp, *sub;

	if (!head || !*head)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = (*(*head)).next;
		free(temp);
		return (1);
	}
	for (nnod = 0; nnod < (index - 1); nnod++)
	{
		temp = temp->next;
		if (temp == NULL)
			return (-1);
	}
	sub = (*temp).next;
	(*temp).next = (*sub).next;
	free(sub);
	return (1);
}
