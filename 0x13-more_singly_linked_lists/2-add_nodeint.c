#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: header pointer
 * @n: int data type
 * Return: address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
