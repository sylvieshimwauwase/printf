#include "main.h"
#include <stdio.h>

/**
 * print_d - prints decimal number
 * @args: number 
 *
 * Return: count
 */
int print_d(va_list args)
{
	int num = va_arg(args, int);
	int count = 0, retval;
	unsigned int abs;

	if (num < 0)
	{
		retval = _putchar('-');
		if (retval == -1)
		{
			return (-1);
		}
		count += 1;
		abs = -num;
	}
	else if (num == 0)
	{
		retval = _putchar('0');
		if (retval == 1)
			return (1);
		else
			return (-1);
	}
	else 
	{
		abs = num;
	}
	retval = print_number(abs);

	if (retval == 1)
	{
		count += countDigits(abs);
	}
	else
		count = -1;
	return (count);
}
