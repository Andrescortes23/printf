#include "holberton.h"

/**
 * func_porc - To print %
 * @ap: List of arguments
 *
 * Return: Number of characters printed
 */
int func_porc(__attribute__((unused))va_list ap)
{
	_putchar('%');
	return (1);
}
