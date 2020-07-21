#include "holberton.h"

/**
 * selec_check - specific char
 * @character: arguments
 *
 * Return: -1 for %, 1 for char
 */
int selec_check(char character)
{
	int a, b, call, counter = 0;

	for (a = 0; format[a] != '\0'; a++)
	{
		if (format[a] == '%')
		{
			for (b = 0; function[b].op != NULL; b++)
			{
				if (format[a + 1] == function[b].op[0])
					{
						call = function[b].func(ap);
						if (call == -1)
							return (-1);
						counter += call;
						break;
					}
			}
			if (function[b].op == NULL && format[a + 1] != ' ')
			{
				if (format[a + 1] != '\0')
				{
					_putchar(format[a]);
					_putchar(format[a + 1]);
					counter = counter + 2;
				}
				else
					return (-1);
			}
			a = a + 1;
		}
		else
		{
			_putchar(format[a]);
			counter++;
		}
	}
	return (counter);
}
