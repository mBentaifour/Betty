#include "lists.h"
#include <stdio.h>

/**
* add_nodeint_end - a new node at the end
* @head: A pointer to the address of the head
* @n: Integer for the new node to contain
*
* Return: the new element, or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *neo, *last;

	neo = malloc(sizeof(listint_t));
	if (neo == NULL)
		return (NULL);

	(*neo).n = n;
	(*neo).next = NULL;

	if (*head == NULL)
		*head = neo;

	else
	{
		last = *head;
		while ((*last).next != NULL)
			last = (*last).next;
		(*last).next = neo;
	}

	return (*head);
}
