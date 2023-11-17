#include "lists.h"
#include <string.h>

/**
* add_node - Add new node at beginning of a list_t
* @head: pointer to head of linked list
* @str: string needs to be duplicated
*
* Return: NULL - If function fails
* Otherwise, address of the new element
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *nood;
	int leng;

	if (head == NULL || str == NULL)
		return (NULL);
	nood = malloc(sizeof(list_t));
	if (nood == NULL)
		return (NULL);
	nood->str = strdup(str);
	if (!nood->str)
	{
		free(nood);
		return (NULL);
	}
	for (leng = 0; str[leng];)
		leng++;
	nood->len = leng;
	nood->next = *head;
	*head = nood;
	return (nood);
}
