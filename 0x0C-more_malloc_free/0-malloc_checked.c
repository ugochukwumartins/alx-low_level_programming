#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * *malloc_checked - allocate memory with malloc
 * @b: unsigned int type
 * Return: return pointer
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
