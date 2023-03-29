#include "main.h"

/**
 * print_o - prints octal number from decimal
 * @args: the number to be printed
 *
 * Return: the number of charcters that are printed
 */

int print_o(va_list args)
{
	unsigned int decNum = va_arg(args, unsigned int), rem;
	int count = 0, i = 1, res;

	char *str;

	count += countOctal(decNum);
	str = malloc(sizeof(char) * (count + 1));
	if (str == NULL)
		return (-1);

	for (i = 1; i < count + 1; i++)
	{
		rem = decNum % 8;
		decNum = decNum / 8;
		str[count - i] = rem + '0';
	}
	for (i = 0; i < count; i++)
	{
		res = _putchar(str[i]);
		if (res == -1)
		{
			free(str);
			return (-1);
		}
	}
	free(str);
	return (-1);
}
