#include "holberton.h"

/**
 * func_b - function to convert decimal to binary
 * @ap: lista type
 *
 * Return: numbert
 */
int func_b(va_list ap)
{
	unsigned int i, x, bit = 0, leng = 0;
	char *ptr;

	x = va_arg(ap, unsigned int);
	if (x == 0)
	{
		_putchar('0');
		leng = 1;
		return (leng);
	}
	leng = length(x, 2);
	if (leng == 0)
		return (-1);
	ptr = malloc(sizeof(char) * leng);
	if (ptr == NULL)
		return (-1);
	while (x > 0)
	{
		bit = x % 2;
		x /= 2;
		ptr[i] = bit + '0';
		i++;
	}
	rev_string(ptr);
	  for (i = 0; i < leng; i++)
	_putchar(ptr[i]);
	free(ptr);
	return (i);
}
