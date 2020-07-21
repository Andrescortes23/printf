#include "holberton.h"

/**
 * func_string - print string
 * @ap: list of arguments
 *
 * Return: The number of printed characters
 */
int func_string(va_list ap)
{
	int index;
	char *pntr;

	pntr = va_arg(ap, char *);

	if (pntr == NULL)
	{
		pntr = "(nil)";
		for (index = 0; index < 7; index++)
			_putchar(pntr[index]);
		return (index);
	}
	else
		while (pntr[index] != '\0')
			_putchar(pntr[index++]);
	return (index);
}
