#include "main.h"

/**
 * print_str - a function to print a string
 * @arg_list: list of arguments
 * Return: length
 */

int print_str(va_list arg_list)
{
	int len, x;
	char *str = va_arg(arg_list, char *);

	len = strlen(str);
	for (x = 0; x < len; x++)
		putchar(str[x]);
	return (len);
}

