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
	for (i = 0; i < 4; i++)
	{
		if (character == list[i])
			return (1);
	}
	return (0);
}
