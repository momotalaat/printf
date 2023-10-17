#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

 #define BUFFER_SIZE 1024

 /**
  * struct function - struct for functions
  * @spe: specifier pointer
  * @func: function pointer
  */

 typedef struct function
 {
         int (*func)();
         char *spe;
 } function;

 int _putchar(char c);
 int _printf(const char *format, ...);
 int print_S(va_list print_args);
 int print_X(va_list print_args);
 int print_SX(int a);
 int print_cha(va_list print_args);
 int print_int(va_list print_args);
 int print_rot(va_list print_args);
 int print_bin(va_list print_args);

 #endif
