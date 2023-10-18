#include "main.h"

/**
 * print_bin - a function to print an unsigned binary
 * @arg_list: list of arguments
 * Return: length
 */

int print_bin(va_list arg_list)
{
	unsigned int int_dec = va_arg(arg_list, int);
	unsigned int int_bin[1024];
	int x = 0, y;

	if (!arg_list)
		exit(-1);

	if (int_dec == 0)
	{
		putchar('0');
		return (1);
	}
	while (int_dec != 0)
	{
		int_bin[x] = int_dec % 2;
		int_dec = int_dec / 2;
		x++;
	}
	y = x - 1;

	for (y = x - 1; y >= 0; y--)
		putchar(int_bin[y] + '0');
	return (x);
}

