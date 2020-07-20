#include "holberton.h"
/**
 *type_t_func - to choose the function
 *@c: string to pass
 *Return: char to print
 */
int (type_t_func(const char c))(va_list)
{
	int index = 0;

	type_t format[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{NULL, NULL},
	};

	while (index < 6)
	{
		if (*(format[index].op) == s)
		{
			return (format[index].f);
		}
		index++;
	}
	return (0);
}
