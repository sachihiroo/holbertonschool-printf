#include "main.h"
/**
 * binary - print char
 * @args: pointer
 * Return: size
 */
int binary(va_list args)
{
	int bin_num[1000];
	int i = 0;
	int j;

	int n = va_arg(args, int);
	while (n > 0)
	{
		bin_num[i] = n % 2;
		n = n / 2;
		i++;
	}
	for (j = i - 1; j >=0; j--)
	{
		printf("%d",bin_num[j]);
	}

	return (i);
}
