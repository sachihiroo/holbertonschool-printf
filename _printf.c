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
	unsigned int i = 0, j = 0;
	int size = 0;
	va_list args;

	va_start(args, format);
	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; f[j].str != '\0'; j++)
			{
				if (f[j].str == format[i + 1])
				{
					size = size + f[j].print(&args);
					i++;
					break;
				}
			}
			size -= 1;
		}
		_putchar(format[i]);
		size += 1;
	}
	va_end(args);
	return (size);
}
