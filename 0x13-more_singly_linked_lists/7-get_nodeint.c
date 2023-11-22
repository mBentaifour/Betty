#include "lists.h"
#include <stdio.h>

/**
* get_nodeint_at_index - a function that returns the nth node
* @head: head of the list
* @index: which node to stop
*
* Return: if the node does not exist, return NULL
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int dd;

	dd = 0;
	while (dd < index)
	{
		if ((*head).next == NULL)
			return (NULL);
		head = (*head).next;
		dd++;
	}
	return (head);
}
