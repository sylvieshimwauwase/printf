#include "main.h"

/**
 * print_s - prints a string
 * @args: arguments to string to be printed
 * Return: counts of charcters printed
 */

int print_s(va_list args)
{
	char *str = va_arg(args, char*);
	int count = 0, result;

	if (!str)
	{
		str = "(null)";
	}
	while (*str)
	{
		result = _putchar(*str);
		if (result == -1)
			return (-1);
		count++;
		str++;
	}

	return (count);
}
