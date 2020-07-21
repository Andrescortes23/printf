#include "holberton.h"

/**
 * select_func - select different types of function
 * @format: _printf argument
 * @list: list of arguments
 * @function: function type structure
 *
 * Return: count
 */
int select_func(const char *format, va_list ap, type_t function[])
{
	int i, j, selec, count = 0;

	if (!format)
		return (-1);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; function[j].op; j++)
			{
				if (format[i + 1])
				{
					selec = function[j].func(ap);
					if (selec == -1)
						return (-1);
					count += selec;
					break;
				}
			}

			if (format[i + 1] != ' ' && !(function[j].op))
			{
				if (format[i + 1])
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					count += 2;
				}
				else
					return (-1);
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	return (count);
}
