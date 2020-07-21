#include "holberton.h"

/**
 * selec_type - selec type
 * @op: selec type
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

	for (i = 0; i < 5; i++)
	{
		if (function[i].op == op)
			return (function[i].func);
	}
	return (0);
}
