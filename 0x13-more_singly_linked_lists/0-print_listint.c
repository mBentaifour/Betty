#include "lists.h"
#include <stdio.h>

/**
* print_listint - a Prints elements listint_t list
* @h: Pointer to the head of list_t list
*
* Return: number of killnod
*/

size_t print_listint(const listint_t *h)
{
        size_t killnod = 0;

        if (h == NULL)
                return (0);
        while (h != NULL)
        {
          printf("%d\n", (*h).n);
                h = (*h).next;
                killnod++;
        }
        return (killnod);
}
