#include "holberton.h"

/**
 * func_o - converts and prints base 10 in 8
 * @num: argument in
 *
 * Return: number
 */
int func_o(unsigned int num)
{
	if (num < 8)
	{
		_putchar(num + '0');
		return (1);
	}
	return (1 + func_o(num / 8) + !_putchar(num % 8 + '0'));
}

/**
 * print_o - print argument octal
 * @ap: arguements
 *
 * Return: number
 */
int print_o(va_list ap)
{
	unsigned int num;

	num = va_arg(ap, unsigned int);
	return (func_o(num));
}
