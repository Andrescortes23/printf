#include "holberton.h"

/**
 * func_char - function to print char
 * @ap: list of arguments
 *
 * Return: number of arguments
 */
int func_char(va_list ap)
{
	_putchar(va_arg(ap, int));
	return (1);
}
