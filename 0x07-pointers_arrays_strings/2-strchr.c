#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates char c in a string
 * @s: string
 * @c: char to be located
 * Return: c
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	else
		return (NULL);
}
