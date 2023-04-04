#include "main.h"
#include <string.h>
/**
 * _memcpy - copies n bytes from memory area
 * src to memory area dest
 * @dest: copies to dest
 * @src: copies from src
 * @n: number of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
