#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * sum_listint - calculates the sum od all the data in a listint_t
 * list
 * @head: first node in the linked list
 * Return: the resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}

