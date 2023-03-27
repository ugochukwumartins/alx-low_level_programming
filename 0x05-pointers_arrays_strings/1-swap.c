#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap the values of two intergers
 * @a: parameter 1
 * @b: parameter 2
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
