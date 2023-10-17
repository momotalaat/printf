#include "main.h"

/**
 * print_X - afunction to print uppercase hexadecimal numbers
 * @print_args : arguments
 * Return: length
 */

int print_X(va_list print_args)
{
	unsigned int value = va_arg(print_args, unsigned int);
	int len = 0, x, y;
	char HEX_cha[16] = "0123456789ABCDEF";
	char HEX_str[9];

	if (value == 0)
	{
		putchar('0');
		len++;
	}
	else
	{
		while (value > 0)
		{
			HEX_str[x] = HEX_cha[value % 16];
			value /= 16;
			x++;
		}
		for (y = x - 1; y >= 0; y--)
		{
			putchar(HEX_str[y]);
			len++;
		}
	}
	return (len);
}
