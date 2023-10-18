#include "main.h"

/**
 * _printf - Custom printf function
 * @format: The format string
 * Return: Number of characters printed
 */

int _printf(const char *format, ...)
{
	va_start(args, format);

	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					c = va_arg(args, int);
					count += write(1, &c, 1);
					break;
				case 's':
					str_arg = va_arg(args, char *);
					count += write(1, str_arg, strlen(str_arg));
					break;
				case '%':
					count += write(1, "%", 1);
					break;
				case 'D':
				case 'i':
					int_arg = va_arg(args, int);
					sprintf(buffer, "%d", int_arg);
					count += write(1, buffer, strlen(buffer));
					break;
				default:
					count += write(1, &format[i - 1], 2);
					break;
			}
		}
		else
		{
			count += write(1, &format[i], 1);
		}
	}
	va_end(args);
	return (count);
}
