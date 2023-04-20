#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers
 * @separator: string t be printed between numbers
 * @n: number of parameters
 * Return: Sum of all parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int aux = 0;

	va_start(ap, n);
		for (i = 0; i < n; i++)
		{
			aux = va_arg(ap, int);
			printf("%d", aux);
			if (i != (n - 1) && separator != 0)
				printf("%s", separator);
		}
	va_end(ap);
	printf("\n");
}
