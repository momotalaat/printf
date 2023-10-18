#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

#define BUFFER_SIZE 1024

extern int count = 0, int_arg, i, c;
extern char *str_arg;
extern char buffer[1024];
extern va_list args;

int _printf(const char *format, ...);

#endif
