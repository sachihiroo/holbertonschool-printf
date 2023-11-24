#ifndef HEADER
#define HEADER
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdarg.h>
#include <unistd.h>
int _putchar(char  c);
int str(char *c);
int _printf(const char *format, ...);
typedef struct form
{
	char str;
	int (*print)(va_list *);
}fmt;
int char_print(va_list *args);
int pert_print();
int string_print(va_list *args);
#endif
