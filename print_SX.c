#include "main.h"

/**
 * print_SX - afunction to print uppercase hexadecimal numbers
 * @a: argument
 * Return: length
 */

int print_SX(int a)
{
	int len = 0, x, y = 0;
	char hex_cha[16] = "0123456789ABCDEF";
	char hex_str[9];

	if (a == 0)
	{
		putchar('0');
		len++;
	}
	else
	{
		while (a > 0)
		{
			hex_str[y] = hex_cha[a % 16];
			a /= 16;
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

