#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: value 1
 * @max: highest value
 * Return: new pointer
 */
int *array_range(int min, int max)
{
	int *arr;
	int size;
	int i = 0;

	if (min > max)
		return (NULL);
	size = (max - min);
	arr = malloc(sizeof(*arr) * (size + 1));
	if (arr == NULL)
		return (NULL);
	while (i <= size)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}
