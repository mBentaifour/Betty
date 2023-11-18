#include "lists.h"
#include <stdlib.h>

/**
* free_list - a function is list_t for frees
* @head: Pointer
*
*/

void free_list(list_t *head)
{
	list_t *cap;

	while (head != NULL)
	{
		cap = head;
		head = head->next;
		free(cap->str);
		free(cap);
	}
}
