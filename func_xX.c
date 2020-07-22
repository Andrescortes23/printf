#include "holberton.h"

/**
 * func_x - converts base 10 lowercase base 16
 * @num: arguments
 *
 * Return: number
 */
int func_x(unsigned int num)
{
	if (num < 16)
	{
		if (num < 9)
			_putchar(num + '0');
		else
			_putchar((num % 10) + 97);
		return (1);
	}
	return (1 + func_x(num / 16) + !_putchar(num % 16 < 9 ?
		 num % 16 + '0' : ((num % 16) % 10) + 97));
}

/**
 * func_X - convert base 10 in uppercase base 16
 * @num: argument
 *
 * Return: number
 */
int func_X(unsigned int num)
{
	if (num < 16)
	{
		if (num < 9)
			_putchar(num + '0');
		else
			_putchar((num % 10) + 65);
		return (1);
	}
	return (1 + func_X(num / 16) + !_putchar(num % 16 < 9 ?
		 num % 16 + '0' : ((num % 16) % 10) + 65));
}

/**
 * print_x - print argument hex (base 16)
 * @ap: argument
 *
 * Return: number
 */
int print_x(va_list ap)
{
	unsigned int num;

	num = va_arg(ap, unsigned int);
	return (func_x(num));
}

/**
 * print_X - print argument hex (base 16)
 * @ap: arguments
 *
 * Return: number
 */
int print_X(va_list ap)
{
	unsigned int num;

	num = va_arg(ap, unsigned int);
	return (func_X(num));
}
