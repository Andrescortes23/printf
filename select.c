#include "holberton.h"

/**
 * select_func - specific char
 * @format: _printf arguments
 *@ap: list of arguments
 *@function: function type struct
 * Return: number of prints
 */
int select_func(const char *format, va_list ap, type_t function[])
{
	int a, b, call, counter = 0;

	if (format == NULL)
		return (-1);

	for (a = 0; format[a] != '\0'; a++)
	{
		if (format[a] == '%')
		{
			for (b = 0; function[b].op != NULL; b++)
			{
				if (format[a + 1] == function[b].op[0])
				{
					call = function[b].func(ap);
					if (call == -1)
						return (-1);
					counter += call;
					break;
				}
			}
			if (function[b].op == NULL && format[a + 1] != ' ')
			{
				if (format[a + 1] != '\0')
				{
					_putchar(format[a]);
					_putchar(format[a + 1]);
					counter = counter + 2;
				}
				else
					return (-1);
			}
			a = a + 1;
		}
		else
		{
			_putchar(format[a]);
			counter++;
		}
	}
	return (counter);
}
