#ifndef HOLBERTON
#define HOLBERTON
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

/**
 * type - struct type
 * @op: the operator
 * @func: function pointer
 *
 * Description: contain char pointer and function pointer
 */
typedef struct type
{
	char op;
	int (*func)(va_list ap);
} type_t;

int _putchar(char c);
int _printf(const char *format, ...);
int func_char(va_list ap);
int func_string(va_list ap);
int selec_check(char character);
int func_int(va_list ap);
int func_dec(va_list ap);
int (*selec_type(char op))(va_list ap);

#endif
