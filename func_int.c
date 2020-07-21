#include "holberton.h"

/**
 * func_dec - function to print numbers
 * @ap: list of arguments
 *
 * Return: number of arguments
 */
int func_dec(va_list ap)
{
	int resul, num, count;
	unsigned int n, x;

	resul = count = 0;
	num = 1;
	resul = va_arg(ap, int);
	if (resul < 0)
	{
		resul *= -1;
		_putchar('-');
		count++;
	}
	x = resul;
	n = resul;
	while (n > 9)
	{
		n /= 10;
		num *= 10;
	}
	while (num >= 1)
	{
		count++;
		_putchar(((x / num) % 10) + '0');
		num /= 10;
	}
	return (count);
}

/**
 *func_int - to print integer
 *@ap: parameters
 *Return: func_dec to parameters
 */
int func_int(va_list ap)
{
	return (func_dec(ap));
}
