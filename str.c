#include "main.h"
/**
 * str - Entry point
 * @c: char
 * Return: i
 */
void str(char *c)
{

	if (c == NULL)
	{
		c = "(null)";
	}

	for (i = 0; c[i] != '\0'; i++)
	{

		_putchar(c[i]);
	}
}
