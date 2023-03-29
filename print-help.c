#include "main.h"

/**
 * print_number - we are printing some printing numbers
 * @n: number
 *
 * Return:void
 */
int print_number(unsigned int n)
{
	int retval;
	unsigned int num = n;

	if (num / 10)
		print_number(num / 10);
	retval = _putchar('0' + num % 10);
	if (retval == -1)
	{
		return (retval);
	}
	return (retval);
}

/**
 * countDigits(unsigned int num)
 * @num:number
 *
 * Return: count
 */
int countDigits(unsigned int num)
{
	int count = 0;

	while (num > 0)
	{
		count++;
		num /= 10;
	}
	return (count);
}

/**
 * countBinary - counts number of digits
 * @num:number
 *
 * Return: count
 */
int countBinary(unsigned int num)
{
	int count = 0;

	while (num > 0)
	{
		count++;
		num /= 10;
	}
	return (count);
}

/**
 * countOctal - count how may Octal number in in num
 * @num: the number
 *
 * Return: the total octal count
 */

int countOctal(unsigned int num)
{
	int count = 0;

	while (num > 0)
	{
		count++;
		num /= 8;
	}
	return (count);
}
/**
 * _strlen - count the number of characters
 * @str: points to string
 *
 * Return: number of characters
 */
int _strlen(char *str)
{
	int count = 0;

	while (*(str + count))
		count++;

	return (count);
}
