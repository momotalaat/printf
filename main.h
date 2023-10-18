#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

#define BUFFER_SIZE 1024

/**
 * struct call - typedef struct to call functions
 *@sp: pointer to specifier
 *@func: pointer to function
 */

typedef struct call
{
	int (*func)();
	char *sp;
} call;

int _printf(const char *format, ...);
int _putchar(char c);
int print_SX(int a);
int print_per(void);
int print_S(va_list arg_list);
int print_u(va_list arg_list);
int print_o(va_list arg_list);
int print_x(va_list arg_list);
int print_X(va_list arg_list);
int print_str(va_list arg_list);
int print_cha(va_list arg_list);
int print_int(va_list arg_list);
int print_rot(va_list arg_list);
int print_bin(va_list arg_list);
int print_rev(va_list arg_list);

#endif

