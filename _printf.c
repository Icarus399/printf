#include "main.h"
#include <stdarg.h>

/**
 * _printf - this function produces output according to a format.
 * Return: The number of characters printed.
 * @format: charater string. Composed of zero or more directives.
 */

int _printf(const char *format, ...)
{
	int i, lenght;

	va_list (args);

	if (format == '\0')
		return (-1);

	va_start(args, format);

	if (args == '\0')
		return (-1);

	

