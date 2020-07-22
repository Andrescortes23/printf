#include "holberton.h"

/**
 * func_b - function to convert decimal to binary
 * @ap: lista type
 *
 * Return: numbert
 */
int func_b(unsigned int num)
{
	if (num < 2)
	{
		_putchar(num + '0');
		return (1);
	}
	return (1 + func_b(num / 2) + !_putchar(num % 2 + '0'));

}


/**
 *
 *
 *
 */
int print_b(va_list ap)
{
	unsigned int number;

	number = va_arg(ap, unsigned int);
	return (func_b(number));
}
