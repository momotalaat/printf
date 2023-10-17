#include "main.h"

/**
 * print_rot - afunction to print a ROT13 string
 * @print_args : arguments
 * Return: length
 */

int print_rot(va_list print_args)
{
	char *str = va_arg(print_args, char *);
	int len = 0;
	char old[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char new[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	if (str == NULL)
		return (-1);

	while (str[len] != '\0')
	{
		int len = 0;

		while (len < 52)
		{
			if (str[len] == old[len])
			{
				putchar(new[len]);
				break;
			}
			len++;
		}
		len++;
	}
	return (len);
}
