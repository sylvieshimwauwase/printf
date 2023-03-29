#include "main.h"

/**
 * rot13 - prints a string in rot13
 * @args: srting to encode
 *
 * Return: number of characters
 */
int rot13(va_list args)
{
	char *str = va_arg(args, char *);
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *alph = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	int id, count = 0;
	char *encoded = NULL;

	encoded = malloc(sizeof(char) * (_strlen(str) + 1));

	if (!encoded || !str)
		return (-1);

	for (count = 0; str[count]; count++)
	{
		for (id = 0; id < 52; id++)
		{
			if (str[count] == alph[id])
			{
				encoded[count] = rot13[id];
				break;
			}
		}
		if (str[count] != alph[id])
			encoded[count] = str[count];
	}
	for (count = 0; encoded[count]; count++)
		_putchar(encoded[count]);

	free(encoded);

	return (count);
}
