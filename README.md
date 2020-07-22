# **Printf**

This repository contain the Printf project by Cristhian Carbonell and Andrés Cortes.
Here we make our own printf function that reproduce the printf function in standar library.
The next are the task you will find in this repository until the date.

**0. Write a function that produces output according to a format.**

* Prototype: int _printf(const char *format, ...);
* Returns: the number of characters printed (excluding the null byte used to end output to strings)
* Write output to stdout, the standard output stream
*format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:

- c
- s
- %
* You don’t have to reproduce the buffer handling of the C library printf function
* You don’t have to handle the flag characters
* You don’t have to handle field width
* You don’t have to handle precision
* You don’t have to handle the length modifiers

**1. Handle the following conversion specifiers:**

* d
* i
* You don’t have to handle the flag characters
* You don’t have to handle field width
* You don’t have to handle precision
* You don’t have to handle the length modifiers

**2. Create a man page for your function.**

**3. Handle the following custom conversion specifiers:**

* b: the unsigned int argument is converted to binary
