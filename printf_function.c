#include "main.h"
/**
 *
 *
 *
 */
void char_print(va_list *args)
{
	_putchar(va_arg(*args, int));
}
/**
 *
 *
 *
 */
void pert_print()
{
	_putchar('%');
}
/**
 *
 *
 *
 */
void string_print(va_list *args)
{
	str(va_arg(*args, char *));
}
