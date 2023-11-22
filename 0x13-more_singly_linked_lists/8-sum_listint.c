#include "lists.h"
#include <stdio.h>

/**
* sum_listint - function that returns the sum of all the data (n)
* @head: Pointer to the head of the list
* Return: if the list is empty, return 0
*/
int sum_listint(listint_t *head)
{
	int som;

	for (som = 0; head; som += head->n, head = head->next)
	;
	return (som);
}
