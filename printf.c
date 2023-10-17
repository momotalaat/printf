#include "main.h"

/**
 * _printf - c function to print a special format
 * @format: format pointer
 * Return: counter
 */

int _printf(const char *format, ...)
{
	int counter = 0, x, y;
	va_list print_args;
	function check[] = {
		{print_bin, "%b"}, {print_cha, "%c"},
		{print_per, "%%"}, {print_int, "%d"},
		{print_int, "%i"}, {print_str, "%s"},
		{print_rev, "%r"}, {print_rot, "%R"},
		{print_u, "%u"}, {print_o, "%o"},
		{print_x, "%x"}, {print_X, "%X"},
		{print_S, "%S"}};

	if (format == NULL || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	va_start(print_args, format);
check:
	while (format[x] != '\0')
	{
		y = 12;
		while (y >= 0)
		{
			if (check[y].spe[0] == format[x] && check[y].spe[1] == format[x + 1])
			{
				counter += check[y].func(print_args);
				x = x + 2;
				goto check;
			}
			y--;
		}
		putchar(format[x]);
		counter++;
		x++;
	}
	va_end(print_args);
	return (counter);
}
