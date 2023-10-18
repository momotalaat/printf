#include "main.h"

/**
 * print_x - afunction to print lowercase hexadecimal numbers
 * @arg_list : list of arguments
 * Return: length
 */

int print_x(va_list arg_list)
{
	unsigned int value = va_arg(arg_list, unsigned int);
	int len = 0, x, y = 0;
	char hex_cha[16] = "0123456789abcdef";
	char hex_str[9];

	if (value == 0)
	{
		putchar('0');
		len++;
	}
	else
	{
	while (value > 0)
	{
		hex_str[y] = hex_cha[value % 16];
		value /= 16;
		y++;
	}
	for (x = y - 1; x >= 0; x--)
	{
		putchar(hex_str[x]);
		len++;
	}
	}
	return (len);
}

