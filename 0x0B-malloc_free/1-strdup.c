#include "main.h"
#include <stdlib.h>
/**
 * _strdup - contains a copy of the string given
 * @str: string
 * Return: string
 */
char *_strdup(char *str)
{
	char *dub;
	unsigned int i = 0;
	unsigned int j = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	i++;

	dub = malloc(i * sizeof(*dub));

	if (dub == NULL)
		return (NULL);
	while (j < i)
	{
		dub[j] = str[j];
		j++;
	}
	return (dub);
}
