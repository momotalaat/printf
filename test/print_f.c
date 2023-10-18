#include "main.h"

/**
 * _printf - aa function to work like printf
 * @format: apointer to string
 * Return: counter
 */

int _printf(const char *format, ...)
{
	int len = 0, x = 0, y;
	va_list arg_list;

	call check[] = {
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

	va_start(arg_list, format);
check:
	while (format[x] != '\0')
	{
		y = 12;
		while (y >= 0)
		{
			if (check[y].sp[0] == format[x] && check[y].sp[1] == format[x + 1])
			{
				len += check[y].func(arg_list);
				x += 2;
				goto check;
			}
			y--;
		}
		putchar(format[x]);
		len++;
		x++;
	}
	va_end(arg_list);
	return (len);
}

