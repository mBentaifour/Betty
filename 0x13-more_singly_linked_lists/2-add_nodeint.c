#include "lists.h"
#include <stdio.h>

/**
* add_nodeint - Adds a new node at the beginning
* @head: A pointer to the address of the head
* @n: Integer for the new node to contain
*
* Return: the new element, or NULL if it failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *neo;

	neo = malloc(sizeof(listint_t));
	if (neo == NULL)
		return (NULL);

	(*neo).n = n;
	(*neo).next = *head;

	*head = neo;

	return (neo);
}
