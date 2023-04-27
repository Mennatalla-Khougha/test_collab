#ifndef _MAIN_H_
#define _MAIN_H_
#include <unistd.h>
#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
int pr_chr(va_list args);
int pr_string(char *str);
int pr_percent(void);
int print(char s);
int check_input(const char *format);
int print_spec(char format, va_list args);
int print_number(int x, int sum);
int pr_decimal(va_list args);
int pr_integer(va_list args);
int pr_binary(va_list args);
int print_b(unsigned int n, int sum, int base);
int pr_unsign(va_list args);
int print_num(unsigned int u, int sum);
int pr_hexa(va_list args, int n);
int print_h(unsigned int num, int sum, int chr);
int pr_octal(va_list args);
int pr_str(va_list args);
int print_str(char *str);
int pr_pointer(va_list args);
int print_p(unsigned long p, int sum);
int pr_rev(va_list args);
int pr_rot(va_list args);
int print_rot(char *str);
int pr_flag(char *flag, va_list args);
int pr_sign(va_list args);
int pr_space(va_list args);
int pr_format(char f);
int print_buffer(char *str);
int _printf(const char *format, ...);
#endif
