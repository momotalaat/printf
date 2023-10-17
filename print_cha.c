#include "main.h"

/**
 * print_cha - afunction to print character
 * @print_args: arguments
 * Return: 1 in success
 */

int print_cha(va_list print_args)
{
	int cha = va_arg(print_args, int);

	putchar(cha);
	return (1);
}
