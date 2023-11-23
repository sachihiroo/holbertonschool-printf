#include "main.h"
/**
 * char_print - check the code
 * @args: pointer
 */
void char_print(va_list *args)
{
	_putchar(va_arg(*args, int));
}
/**
 * pert_print - check the code
 * @args: pointer
 */
void pert_print(void)
{
	_putchar('%');
}
/**
 * string_print
 * @args: pointer
 */
void string_print(va_list *args)
{
	str(va_arg(*args, char *));
}
