#include "holberton.h"

/**
 * selec_check - specific char
 * @character: arguments
 *
 * Return: -1 for %, 1 for char
 */
int selec_check(char character)
{
	char list[] = {'s', 'c', 'd', 'i'};
	int i;

	if (character == '%')
		return (-1);
	i = 0;
	while (i < 4)
	{
		if (character == list[i])
			return (1);
		i++;
	}
	return (0);
}
