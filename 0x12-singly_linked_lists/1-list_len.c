#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * list_len - returns the no. of elements in a linked
 * list
 * @h: pointer to the list_t list
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t b = 0;

	while (h)
	{
		b++;
		h = h->next;
	}

	return (b);
}
