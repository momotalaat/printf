#include "main.h"

/**
 * print_rev - a function to print string in reverse
 * @arg_list: list of arguments
 * Return: length of printed int
 */

int print_rev(va_list arg_list)
{
	int x = 0, y;
	char *str = va_arg(arg_list, char*);

	while (str[x] != '\0')
		x++;
	y = x;
	x -= 1;

	while (x >= 0)
	{
		putchar(str[x]);
		x--;
	}
	return (y);
}

