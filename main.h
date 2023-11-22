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
	void (*print)(va_list *);
}fmt;
int string_length(va_list args);
void char_print(va_list *args);
void pert_print();
void string_print(va_list *args);
#endif
