#include "main.h"

/**
 * print_lowerHex - convert and print integer in hexadecimal
 * @num: number to print
 * @count: pointer to counter the number of bytes printed
 *
 * Return: void
 */
void print_lowerHex(unsigned int num, int *count)
{
	int retVal;

	if (num > 15)
		print_lowerHex(num >> 4, count);

	if (*count == -1 )
		return;

	if ((num & 15) < 10)
		retVal = _putchar('0' + (num & 15));
	else
		retVal = _putchar('a' + (num & 15) % 10);

	if (retVal == -1)
		*count = -1;
	else
		*count += retVal;
}

/**
 * print_x - print an integer in lowercase decimal
 * @args: integer to print as current element
 *
 * Return: number of bytes
 */
int print_x(va_list args)
{
	int count = 0;

	print_lowerHex(va_arg(args, int), &count);

	return (count);
}
