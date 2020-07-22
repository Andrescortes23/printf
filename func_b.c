#include "holberton.h"

/**
 * func_b - function to convert decimal to binary
 * @num: lista type
 *
 * Return: number
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
 *print_b - print binary
 *@ap: list of arguments
 *Return: number
 */
int print_b(va_list ap)
{
	unsigned int number;

	number = va_arg(ap, unsigned int);
	return (func_b(number));
}
