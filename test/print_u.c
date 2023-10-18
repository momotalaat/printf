#include "main.h"

/**
 * print_u - afunction to print unsigned integer
 * @arg_list : list of arguments
 * Return: length
 */

int print_u(va_list arg_list)
{
	unsigned int value = va_arg(arg_list, unsigned int);
	int len = 0, x = 0, y;
	int dig[10];

	if (value == 0)
	{
		putchar('0');
		len++;
	}
	else
	{
	while (value > 0)
	{
		dig[x] = value % 10;
		value /= 10;
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

