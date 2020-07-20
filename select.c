#include "holberton.h"

/**
 * select- select different types of function
 * @format: _printf argument
 * @list: list of arguments
 * @function: function type structure
 */
int select_func(const char *format, va_list ap, type_t function[])
{
	int i, j, count;

	if (format[i] == NULL)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		for (; format[i] != '%' && format[i]; i++)
		{
			_putchar(format[i]), count++;
		}
		if (!format[i])
			return (count);
		if (format[i] == '%' && !format[i + 1])
			return (-1);
		for (j = 0; function[j].type != NULL; j++)
		{
			if (format[i + 1] == ' ')
			{
				_putchar(format[i + 1]);
				count++;
				i++;
			}
			return (-1);
			if (format[i + 1] == function[j].type[0])
			{
				count += function[j].f(ap);
				i += 2;
			}
		}
		if (function[j].type == NULL)
		{
			_putchar(format[i]);
			i++;
			count++;
		}
	}
	return (count);
}
