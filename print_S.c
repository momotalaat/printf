#include "main.h"

/**
 * print_S - a function to print a value in hex
 * @arg_list: list of arguments
 * Return: length
 */

int print_S(va_list arg_list)
{
	char *str = va_arg(arg_list, char *);
	int i = 0, counter = 0, val;

	if (str == NULL)
		return (-1);

	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			putchar('\\');
			putchar ('x');
			counter += 2;
			val = str[i];

			if (val < 16)
			{
				putchar('0');
				counter++;
				counter += print_SX(val);
			}
		}
		else
		{
			putchar(str[i]);
			counter++;
		}
			i++;
	}
	return (counter);
}

