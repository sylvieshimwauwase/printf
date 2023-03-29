#include "main.h"

/**
 * print_c - prints the character
 * @args: arg passed to the format
 * Return: count of characters printed otherwise NULL
 */

int print_c(va_list args)
{
	char c = va_arg(args, int);
	int result, count = 0;

	result = _putchar(c);
	if (result == -1)
	{
		return (-1);
	}
	count++;

	return (count);
}
