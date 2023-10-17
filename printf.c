#include "main.h"

/**
 * _printf - c prog for printing a formatted string
 * @format: pointer to the format string
 *
 * Discription: a c function that imitates the stdio.h printf fn.
 *
 * Return: characters count in the string
 */

int _printf(const char *format, ...)
{
	int count_ret = 0;
	int n = 0, m;
	va_list pfargs;
	call_fn check_sp[] = {
		{bin_pr, "%b"},	{char_pr, "%c"}, {per_pr, "%%"}, {int_pr, "%d"},
		{int_pr, "%i"}, {str_pr, "%s"}, {rev_pr, "%r"}, {rot13_pr, "%R"},
		{u_pr, "%u"}, {o_pr, "%o"}, {x_pr, "%x"}, {X_pr, "%X"}, {S_pr, "%S"}};

	if (format == NULL || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	va_start(pfargs, format);
check:
	while (format[n] != '\0')
	{
		m = 12;
		while (m >= 0)
		{
			if (check_sp[m].sp[0] == format[n] && check_sp[m].sp[1] == format[n + 1])
			{
				count_ret += check_sp[m].fn(pfargs);
				n = n + 2;
				goto check;
			}
			m--;
		}
		putchar(format[n]);
		count_ret++;
		n++;

	}
	va_end(pfargs);
	return (count_ret);
}
