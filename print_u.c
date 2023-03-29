#include "main.h"

/**
 * print_u - prints unsigned int
 * @args: arguments list passed in printf
 *
 * Return: chars printed otherwise -1
 */

int print_u(va_list args)
{
	unsigned int num = va_arg(args, unsigned int), digits = num;
	int count = 0, res;

	if (num < 1)
	{
		_putchar('0');
		return (1);
	}
	res =  print_number(num);
	if (res == 1)
	{
		count += countDigits(digits);
	}
	else
		count = -1;
	return (count);
}
