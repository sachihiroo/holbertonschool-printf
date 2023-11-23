#include "main.h"
/**
 * count - check the code
 * @args: pointer
 * Return: 0 or o
 */
int count(va_list args)
{
	int o;

	for (o = 0; args != '\0'; o++)
	{
		if (args == NULL)
		{
			return (0);
		}
		
	}
	return (o);
}
