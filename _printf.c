#include "main.h"
/**
 * _printf - Entry point
 * @format: char
 * Return: byte size
 */
int _printf(const char *format, ...)
{
	fmt f[] = {
		{'c', char_print},
		{'%', pert_print},
		{'s', string_print},
		{'\0', NULL},
	};
	unsigned int i, j, size;
	va_list args;

	va_start(args, format);
	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			size += 1;
		}
		for (j = 0; f[j].str < '\0'; j++)
		{
			if (format[i + 1] == f[j].str)
			{
				f[j].print(&args);
			}
		}
	}
	va_end(args);
	return (j + size);
}
