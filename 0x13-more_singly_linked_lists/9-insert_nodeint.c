#include "lists.h"
#include <stdlib.h>

/**
* insert_nodeint_at_index - a function that inserts a new node
* @head: head of the list
* @index: location to insert node
* @n: value of the inserted node
*
* Return: the address of the new node, or NULL if it failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *zedd, *nouv;

	zedd = *head;
	nouv = malloc(sizeof(listint_t));
	if (nouv == NULL)
		return (NULL);
	(*nouv).n = n;
	if (index == 0)
	{
		(*nouv).next = zedd;
		*head = nouv;
		return (*head);
	}
	while (index > 1)
	{
		zedd = (*zedd).next;
		index--;
		if (!zedd)
		{
			free(nouv);
			return (NULL);
		}
	}
	nouv->next = (*zedd).next;
	(*zedd).next = nouv;
	return (nouv);
}
