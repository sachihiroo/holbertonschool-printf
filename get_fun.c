#include "main.h"
/**
 * get_fun - Entry point
 * @format: char
 * @args: va_list
 * Return: byte size
 */
int get_fun(char format, va_list args)
{
	int j = 0, size = 0;
	fmt f[] = {
		{'c', char_print},
		{'%', pert_print},
		{'s', string_print},
		{'\0', NULL},
	};

	for (j = 0; f[j].str != '\0'; j++)
	{
		if (f[j].str == format)
		{
			size = size + f[j].print(args);
			break;
		}
	}
	if (f[j].str == '\0')
	{
		_putchar('%');
		_putchar(format);
		size += 2;
	}
	return (size);
}