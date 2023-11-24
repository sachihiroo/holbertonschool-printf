#include "main.h"
/**
 * char_print - check the code
 * @args: pointer
 */
int char_print(va_list *args)
{
	_putchar(va_arg(*args, int));
	return (1);
}
/**
 * pert_print - check the code
 * @args: pointer
 */
int pert_print()
{
	_putchar('%');
	return (1);
}
/**
 * string_print
 * @args: pointer
 */
int string_print(va_list *args)
{
	char *str;
	int i;
	str = va_arg(*args, char *);
	if (str == NULL)
	{
		str = "(null)";
	}

	for (i = 0; str[i] != '\0'; i++)
	{

		_putchar(str[i]);
	}
	return (i);
}
