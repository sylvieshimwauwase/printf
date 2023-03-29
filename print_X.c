#include "main.h"

/**
 * print_upperHex - print and convert integer in hex
 * @num: number to print
 * count: pointer to count number of bytes
 *
 * Return:void
 */
void print_upperHex(unsigned int num, int *count)
{
	int retVal;

	if (num > 15)
		print_upperHex(num >> 4, count);

	if (*count == -1)
		return;

	if ((num & 15) < 10)
		retVal = _putchar('0' + (num & 15));
	else
		retVal = _putchar('A' + (num & 15) % 10);
	if (retVal == -1)
		*count = -1;
	else
		*count += retVal;
}

/**
 * print_X - print an integer in uppercase
 * @args: integer to print
 *
 * Return: number of bytes
 */
int print_X(va_list args)
{
	int count = 0;

	print_upperHex(va_arg(args, int), &count);

	return (count);
}
