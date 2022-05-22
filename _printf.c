#include "main.h"
#include <stdarg.h>

/**
 *  _printf - Imitates the C frintf function
 *
 *@format: the form characters e.g c, s, d
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == 's')
		{
			int i = va_arg(args, int);

			_printf(i);
		} else if (*format == 'c')
		{
		       /*
			*'char' variable will be promoted to 'int'
			* A character literal in C is already 'int' by itself
			*/
			int c = va_arg(args, int);

			_printf(c);
		}


	}
	++format;
}

va_end(args);
return (0);
}
