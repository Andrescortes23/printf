#ifndef HOLBERTON
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
typedef struct type
{
	char *op;
	int (*func)(va_list);
} type_t;
int _putchar(char c);
void _puts(char *str);
int _printf(const char *format, ...);
int func_char(va_list ap);
int func_porc(__attribute__((unused)) va_list ap);
int func_string(va_list ap);
int select_func(const char *format, va_list ap, type_t function[]);
int func_int(va_list ap);

#endif
