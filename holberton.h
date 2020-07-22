#ifndef HOLBERTON
#define HOLBERTON
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

/**
 * struct type - struct type
 * @op: the operator
 * @func: function pointer
 *
 * Description: contain char pointer and function pointer
 */
typedef struct type
{
	char *op;
	int (*func)(va_list ap);
} type_t;

int _putchar(char c);
int _printf(const char *format, ...);
int func_char(va_list ap);
int func_porc(__attribute__((unused)) va_list ap);
int func_string(va_list ap);
int select_func(const char *format, va_list ap, type_t function[]);
int func_int(va_list ap);
int func_dec(va_list ap);
int (*selec_type(char op))(va_list ap);
int func_b(unsigned int num);
int print_b(va_list ap);
int length(unsigned int n, unsigned int b);
void rev_string(char *ptr);
int func_u(va_list ap);
int print_o(va_list ap);
int func_o(unsigned int num);
int func_x(unsigned int num);
int func_X(unsigned int num);
int print_x(va_list ap);
int print_X(va_list ap);

#endif
