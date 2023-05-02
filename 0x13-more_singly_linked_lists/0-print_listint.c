#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint - function that prints all the elements of a listint_t
 * @h: header pointer
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t conts = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		conts++;
	}
	return (conts);
}
