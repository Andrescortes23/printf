#include "holberton.h"

/**
 * _printf - function that produces output according to a format
 * @format: is a character string. The format string is composed or more d
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	type_t function[] = {
		{"c", func_char},
		{"s", func_string},
		{"%", func_porc},
		{"d", func_int},
		{"i", func_int},
		{NULL, NULL}
	};
	va_list ap;
	int print = 0;

	va_start(ap, format);
	print = select_func(format, ap, function);
	va_end(ap);
	return (print);
}
