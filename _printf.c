#include "holberton.h"

/**
 * _printf - function that produces output according to a format
 * @format: is a character string. The format string is composed or more d
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{

	va_list ap;
	int i, j = 0;

	va_start(ap, format);
	if (format == NULL)
		return (-1);
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] == '\0')
			return (-1);
		if (format[i] == '%' && selec_check(format[i + 1]) != 0)
		{
			i++;
			if (selec_check(format[i]) == 1)
				j += (*selec_type(format[i]))(ap);
			else
			{
				_putchar(format[i]);
				j++;
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			j++;
			i++;
		}
	}
	va_end(ap);
	return (j);
}
