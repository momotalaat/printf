#include "main.h"

/**
 * print_bin - afunction to print unsigned int as binary
 * @print_args: arguments
 * Return: length
 */

int print_bin(va_list print_args)
{
    unsigned int dec = va_arg(print_args, int);
	unsigned int bin[1024];
    int len = 0, x;

	if (!print_args)
		exit(-1);
	if (dec == 0)
	{
		putchar('0');
		return (1);
	}
	while (dec != 0)
	{
		bin[len] = dec % 2;
		dec = dec / 2;
		len++;
	}
	x = len - 1;
	for (x = len - 1; x >= 0; x--)
		putchar(bin[x] + '0');
	return (len);
}
