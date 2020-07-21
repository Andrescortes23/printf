#include "holberton.h"
/**
 *func_string - print string
 *@ap: list of arguments
 *Return: The number of printed characters
 */
int func_string(va_list ap)
{
	int index;
	char *pntr;

	pntr = va_arg(ap, char *);

	if (pntr == NULL)
		pntr = "(nil)";

	index = 0;
	while (pntr[index] != 0)
	{
		_putchar(pntr[index]);
		index++;
	}

	return (index);
}
