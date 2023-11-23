#include "main.h"

int string_length(va_list args)
{

	int s = 0;

	while (va_arg(args,int)!= '\0')
	{
		s++;
	}

	return (s);
}
