#include "main.h"

/**
 *print_rot - afunction to print string by ROT13
 *@arg_list : list of arguments
 *Return: length
 */

int print_rot(va_list arg_list)
{
	char *str_rot = va_arg(arg_list, char *);
	int x = 0, y = 0;
	char current[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char new[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	if (str_rot == NULL)
		return (-1);

	while (str_rot[x] != '\0')
	{
		while (y < 52)
		{

			if (str_rot[x] == current[y])
			{
				putchar(new[y]);
				break;
			}
			y++;
		}
		 x++;
	}
	return (x);
}

