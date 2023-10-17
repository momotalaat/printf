#include "main.h"

/**
 * print_S - afunction to print a hex special character
 * @print_args: list of arguments
 * Return: length
 */

int print_S(va_list print_args)
{
	char *str = va_arg(print_args, char *);
	int x = 0, len = 0, val;

	if (str == NULL)
		return (-1);
	while (str[x] != '\0')
	{
		if (str[x] < 32 || str[x] >= 127)
		{
			putchar('\\');
			putchar ('x');
			len += 2;
			val = str[x];

			if (val < 16)
			{
				putchar('0');
				len++;
				len += print_SX(val);
			}
		}
		else
		{
			putchar(str[x]);
			len++;
		}
			x++;
	}
	return (len);
}
