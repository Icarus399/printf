#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

int porcent(void);

char *convert(unsigned int num, int base);

int _printf(const char *format, ...);

int printnum(va_list args);

int _puts(const char *s);

int _putchar(char c);

int prrintstr(char *ch);

int printchar(va_list args);
#endif /* MAIN_H */
