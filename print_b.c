#include "main.h"
#include <stdio.h>

/**
 * print_b - prints binary number
 * @args: number
 *
 * Return: number of chars
 */
int print_b(va_list args)
{
	int count = 0, retval, i = 1;
	unsigned int decimalNumber = va_arg(args, unsigned int);
	char *string;

	if (decimalNumber < 1)
	{
		_putchar(0 + '0');
		return (1);
	}
	count += countBinary(decimalNumber);
	string = malloc(sizeof(char) * (count + 1));

	if (string == NULL)
		return (-1);

	for (i = 1; i < count + 1; i++)
	{
		string[count - i] = decimalNumber % 2;
		decimalNumber = decimalNumber / 2;
	}
	for (i = 0; i < count; i++)
	{
		retval = _putchar(string[i] + '0');

		if (retval == -1)
		{
			free(string);
			return (-1);
		}
	}
	free(string);
	return (count);
}
