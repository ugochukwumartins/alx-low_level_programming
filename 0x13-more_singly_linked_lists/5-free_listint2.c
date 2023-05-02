#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: pointer
 * Description: frees a list
 */
void free_listint2(listint_t **head)
{
	listint_t *point;

	if (!*head)
		return;

	while (*head)
	{
		point = (*head)->next;
		free(*head);
		*head = point;
	}
	head = NULL;
}
