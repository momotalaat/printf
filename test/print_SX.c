#include "main.h"

/**
 * print_SX - a function to print uppercase hexadecimal numbers
 * @a : argument
 * Return: length
 */

int print_SX(int a)
{
	int c_ret = 0;
	int j;

	if (a == 0)
	{
		putchar('0');
		c_ret++;
	}
	else
	{
		char hex_chars[16] = "0123456789ABCDEF";
		char hex_string[9];
		int i = 0;

		while (a > 0)
		{
			hex_string[i] = hex_chars[a % 16];
			a /= 16;
			i++;
		}
		for (j = i - 1; j >= 0; j--)
		{
			putchar(hex_string[j]);
			c_ret++;
		}
	}
	return (c_ret);
}
