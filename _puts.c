#include "holberton.h"

/**
 * _puts - print a string
 * @str: pointer used to print the string
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
