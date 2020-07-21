#include "holberton.h"

/**
 * func_int - function to print numbers
 * @ap: list of arguments
 *
 * Return: number of arguments
 */
int func_int(va_list ap)
{
	int resul, num, count = 0, tem = 0;

	num = va_arg(ap, int);
	if (num < 0)
	{
		num *= -1;
		_putchar('-');
		count++;

	}
	else if (num == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		while (tem < num)
		{
			tem *= 10;
		}
		tem /= 10;
		while (tem >= 1)
		{
			resul = num / tem;
			_putchar (resul + '0');
			num = (num -(tem * resul));
			tem /= 10;
			count++;
		}
	}
	return (count);
}
