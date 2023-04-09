#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * @argc: argument counter
 * @argv: argument array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		if (argc == 1)
			printf("%s\n", argv[i]);
		else
			break;
	}
	return (0);
}
