#include "main.h"

/**
 * _printf - a function to print special formats
 * @format: pointer to the format string
 * Return: character
 */

int _printf(const char *format, ...)
{
	char c;
	const char *s;
	int x = 0;

	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					c = (char)va_arg(args, int);
					putchar(c);
					x++;
					break;
				case 's':
					s = va_arg(args, const char *);
					while (*s != '\0')
					{
						putchar(*s);
						s++;
						x++;
					}
					break;
				case '%':
					putchar('%');
					x++;
					break;
				default:
					putchar('%');
					putchar(*format);
					x += 2;
					break;
			}
		}
		else
		{
			putchar(*format);
			x++;
		}
		format++;
	}
	va_end(args);
	return x;
}
