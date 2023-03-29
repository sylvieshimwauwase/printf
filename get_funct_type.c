#include "main.h"

/**
 * get_func - determine and select which printf function to use
 * based on specifier
 * @specifier: a char that determine a type of variable to print
 *
 * Return: a pointer to a matching function
 */

int (*get_func(const char *specifier))(va_list)
{
	int i;
	type_t types[] = {
		{"c", print_c},
		{"s", print_s},
		{"o", print_o},
		{"u", print_u},
		{"x", print_x},
		{"X", print_X},
		{"b", print_b},
		{"p", print_p},
		{"F", print_F},
		{"i", print_d},
		{"d", print_d},
		{"R", rot13},
		{"r", print_rev},
		{NULL, NULL}
	};

	for (i = 0; types[i].identifier; i++)
	{
		if (*specifier == types[i].identifier[0])
		{
			return (types[i].print);
		}
	}
	return (NULL);
}
