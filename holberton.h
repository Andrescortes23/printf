#ifnder HOLBERTON
#define HOLBERTON
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * type_op - struct type_op
 * @op: the operator
 * @f: function pointer
 *
 * Description: contain char pointer and function pointer
 */
typedef struct type_op
{
	char *op;
	void (*f)();
}type_t;
int _putchar(char c);
void _puts(char *str);
int _printf(const char *format, ...);

#endf
