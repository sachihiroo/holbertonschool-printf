#include "main.h"
int get_fun(char format, va_list args)
{
	int j = 0, size = 0, check = 1;
	fmt f[] = {
		{'c', char_print},
		{'%', pert_print},
		{'s', string_print},
		{'\0', NULL},
	};
	check = 1;

	for (j = 0; f[j].str != '\0'; j++)
	{
		if (f[j].str == format)
		{
			size = size + f[j].print(args);
			check = 0;
			break;
		}
	}
	if (check == 1)
	{
		_putchar('%');
		size += 1;
		check = 0;
	}
	return (size);
}
