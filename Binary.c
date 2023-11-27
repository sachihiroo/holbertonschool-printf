#include "main.h"
/**
 * binary - print char
 * @args: pointer
 * Return: size
 */
int binary(va_list args)
{
	int remainder, result = 0, multiplier = 1;
	int input = va_arg(args, int);
	int size;
	while (input)
	{
		remainder = input % 2;
		result = remainder * multiplier + result;
		multiplier *= 10;
		input /= 2;
	}
	printf("%i",result);
	return(strlen(result));
}
