#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_listint - this frees a linked list
 * @head: listint_t link to be freed
 */
void free_listint(listint_t *head)
{

	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
