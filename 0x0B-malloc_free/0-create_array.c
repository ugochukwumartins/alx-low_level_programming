#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - function that creates an array
 * of chars and initializes it with a specific char
 * @size: size of array
 * @c: specific char
 * Return: array of char
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(c) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
