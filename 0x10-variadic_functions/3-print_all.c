#include "variadic_function.h"
#include  <stdarg.h>
#include <stdio.h>

/**
 * print_all - print anything.
 * @format: a listof type of argument passed to the function.
 *
 * Return : no return .
 */

void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int i = 0, j, c = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_star(valist, format);
	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
		       	if (format[i] == t_arg[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
	 	case 'c':
			 printf("%c", var_arg(valist, int)), c = 1;
		 	break;
		case 'i':
        	         printf("%d", var_arg(valist, int)), c = 1;
                	 break;
		case 'f':
        	         printf("%f", var_arg(valist, double)), c = 1;
                	 break;
		case 's':
        	        str =  var_arg(valist, char *), c = 1;
               		 if (!str)
			 {  
                	        printf("(nil)");
                        	break;
			 }
               		 printf("%s",str);
              		 break;
	  	  } i++;
	}
	printf("\n"), va_end(valist);
}


