#include "main.h"

/**
 * print_int - afunction to print integer
 * @print_args: arguments
 * Return: length
 */

int print_int(va_list print_args)
{
	int input = va_arg(print_args, int);
	int output, old, current, sum = 1, len = 1;

	old = input % 10;
	input = input / 10;
	output = input;

	if (old < 0)
	{
		putchar('-');
		input = -input;
		old = -old;
		output = -output;
		len++;
	}
	if (output > 0)
	{
		while (output / 10 != 0)
		{
			sum = sum * 10;
			output = output / 10;
		}
		output = input;

		while (sum > 0)
		{
			current = output / sum;
			putchar('0' + current);
			output = output - (sum * current);
			sum = sum / 10;
			len++;
		}
	}
	putchar('0' + old);
	return (len);
}
