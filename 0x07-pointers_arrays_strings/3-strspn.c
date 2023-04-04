#include "main.h"
/**
 * _strspn - gets the lengthof a prefix substring
 * @s: number of bytes
 * @accept: bytes to check
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int cont = 0;
	int j = 0;
	int flag;

	while (*s != '\0')
	{
		flag = 0;
		while (*(accept + j) != '\0')
		{
			if (*s == *(accept + j))
				flag = 1;
			j++;
		}
			j = 0;
			if (flag == 0)
				break;
			cont += 1;
			s++;
	}
		return (cont);
}
