#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);

int printnum(int idx, int count);

int _puts(const char *s);

int _putchar(char c);
#endif /* MAIN_H */
