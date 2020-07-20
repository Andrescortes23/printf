#include "holberton.h"
/**
 *_strlen - To know the lenght of a string
 *@s: Pointer to string
 *Return: The lenght
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}
