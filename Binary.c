#include "main.h"
/**
 * binary - print char
 * @args: pointer
 * Return: size
 */
int binary(va_list args)
{
	int dic_num, bin_num = 0, i = 1, reminder;
	int s=1;

	dic_num = va_arg(args, int);
	while (dic_num != 0)
	{
		reminder = dic_num % 2;
		dic_num /= 2;
		s +=_putchar(bin_num += reminder * i);
		i *= 10;
	}
	return (s);
}
