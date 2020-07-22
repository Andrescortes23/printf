#include "holberton.h"

/**
 * func_u - pringts of type unsigned int
 * @ap: argument
 *
 * Return: number
 */
int func_u(va_list ap)
{
	int count, sum, div, len, cifra;
	unsigned int num;

	num = va_arg(ap, unsigned int);
	for (div = 1000000000; div > 1; div /= 10)
	{
		cifra = (num / div) % 10;
		sum += cifra;
		if (sum != 0)
		{
			_putchar(cifra + '0');
			count++;
		}
	}
	len = num % 10;
	_putchar(len + '0');
	count++;
	return (count);
}
