#include "main.h"

/**
 * print_cha - a function to print a character argument input
 * @arg_list: list of arguments
 * Return: (1)
 */

int print_cha(va_list arg_list)
{
	int x = va_arg(arg_list, int);

	putchar(x);
	return (1);
}

