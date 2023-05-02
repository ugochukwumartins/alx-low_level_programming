#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * listint_len - returns the number of element in a linked list
 * @h: header pointer
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t conts = 0;

	while (h != NULL)
	{
		h = h->next;
		conts++;
	}
	return (conts);
}
