#include "main.h"

/**
 * print_SX - afunction to print uppercase hexadecimal numbers
 * @a : input argument
 * Return: length
 */

int print_SX(int a)
{
    int len = 0, x = 0, y;
    char HEX_cha[16] = "0123456789ABCDEF";
    char HEX_str[9];

	if (a == 0)
	{
		putchar('0');
		len++;
	}
	else
	{
        while (a > 0)
		{
			HEX_str[x] = HEX_cha[a % 16];
			a /= 16;
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
