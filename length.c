#include "holberton.h"

/**
 * length - lenght of a string
 * @n: number
 * @b: base of the number
 *
 * Return: lenght of the number
 */
int length(unsigned int n, unsigned int b)
{
	unsigned int i;

	for (i = 0; n > 0; i++)
		n /= b;
	return (i);
}

/**
 * rev_string - reverse a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int a, b, len;
	char tmp;

	for (a = 0; s[a]; a++)
		{
			;
		}
	len = a;
	a--;
	for (b = 0; b < (len / 2); b++)
		{
			tmp = s[b];
			s[b] = s[a];
			s[a] = tmp;
			a--;
		}
}
