#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - entry
 * @argc: counter
 * @argv: array of string
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int num1, num2, res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	res = num1 * num2;
		printf("%d\n", res);
	return (0);
}
