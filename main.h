#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/* main */
int _printf(const char *format, ...);

/* helpers */
int print_char(char c);
int print_string(char *str);
int print_int(int n);
int _putchar(char c);
#endif
