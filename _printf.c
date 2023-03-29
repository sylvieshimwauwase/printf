#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * _printf - print out to stdout according to the formats, it emulates printf
 * @format: format of a string to print
 * Return: the count number of printed characters
 */

int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;
	int (*func)(va_list) = NULL;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%' && *(format + 1) !=  '%')
		{
			format++;
			func = get_func(format);
			if (*format == '\0')
			{
				return (-1);
			}
			else if (func == NULL)
			{
				_putchar('%');
				_putchar(*format);
				count += 2;
			}
			else
			{
				count += func(args);
			}
		}
		else if (*format == '%' && *(format + 1) == '%')
		{
			format++;
			_putchar('%');
			count += 1;
		}
		else
		_putchar(*format);
		count++;
		format++;
	}
	va_end(args);
	return (count);
}
