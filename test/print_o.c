#include "main.h"

/**
 * print_o - encodes and prints octal numbers
 * @arg_list : list of arguments
 * Return: length
 */

int print_o(va_list arg_list)
{
	unsigned int value = va_arg(arg_list, unsigned int);
	int len = 0, x = 0, y;
	int dig[12];

	if (value == 0)
	{
		putchar('0');
		len++;
	}
	else
	{
	while (value > 0)
	{
		dig[x] = value % 8;
		value /= 8;
		x++;
	}
	for (y = x - 1; y >= 0; y--)
	{
		putchar(dig[y] + '0');
		len++;
	}
	}
	return (len);
}

