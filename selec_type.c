#include "holberton.h"

/**
 * selec_type - selec type
 * @op: type
 * @ap: arguments
 *
 * Return: 0
 */
int (*selec_type(char op))(va_list ap)
{
	int i;
	type_t function[] = {
		{'c', func_char},
		{'s', func_string},
		{'d', func_dec},
		{'i', func_int},
		{'\0', NULL}
	};

	i = 0;
	while (i < 5)
	{
		if (function[i].op == op)
			return (function[i].func);
		i++;
	}
	return (0);
}
