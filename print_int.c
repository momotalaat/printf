#include "main.h"

/**
 * print_int - a function to print an integer argument
 * @arg_list: list of arguments
 * Return: length
 */

int print_int(va_list arg_list)
{
	int x = va_arg(arg_list, int);
	int len = 1, tims = 1, y, o, z;

	o = x % 10;
	x = x / 10;
	y = x;

	if (o < 0)
	{
		putchar('-');
		x = -x;
		o = -o;
		y = -y;
		len++;
	}
	if (y > 0)
	{
		while (y / 10 != 0)
		{
			tims = tims * 10;
			y = y / 10;
		}
		y = x;

		while (tims > 0)
		{
			z = y / tims;
			putchar('0' + z);
			y = y - (tims * z);
			tims = tims / 10;
			len++;
		}
	}
	putchar('0' + o);
	return (len);
}

