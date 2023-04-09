#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * @argc: counter
 * @argv: array of string
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i, digit;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (digit = 0; argv[i][digit]; digit++)
		{
			if (argv[i][digit] < '0' || argv[i][digit] > '9')
			{
				printf("Error\n");
				return (i);
			}
		}
		sum += atoi(argv[i]);
	}
		printf("%d\n", sum);
		return (0);
}
