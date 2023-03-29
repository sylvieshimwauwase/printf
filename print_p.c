#include "main.h"

/**
 * print_pointer - prints unsigned long int in hexadecimal
 * @ptr: pointer to print
 * @count: number of bytes printed
 *
 * Return: void
 */
void print_pointer(unsigned long ptr, int *count)
{
	int retVal;

	if (ptr > 15)
		print_pointer(ptr >> 4, count);
	if (*count == -1)
		return;
	if ((ptr & 15) < 10)
		retVal = _putchar('0' + (ptr & 15));
	else
		retVal = _putchar('a' + (ptr & 15) % 10);
	if (retVal == -1)
		*count = -1;
	else
		*count += retVal;
}

/**
 * print_p - print pointer in lowercase hexadecimal format
 * @args: pointer to print nextelements
 *
 * Return: number of bytes
 */
int print_p(va_list args)
{
	int count = 0;
	void *ptr = va_arg(args, void *);

	if (!ptr)
		return (_printf("(nil)"));

	count = _printf("0x");

	if (count == -1)
		return (count);
	print_pointer((unsigned long) ptr, &count);

	return (count);
}
