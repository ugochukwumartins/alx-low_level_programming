#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - function that prints strings
 * @separator: string t be printed between numbers
 * @n: number of parameters
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *aux;

	va_start(ap, n);
		for (i = 0; i < n; i++)
		{
			aux = va_arg(ap, char *);
			if (aux == NULL)
				printf("(nil)");
			else
				printf("%s", aux);

			if (i != (n - 1) && separator != 0)
				printf("%s", separator);
		}
	va_end(ap);
	printf("\n");
}
