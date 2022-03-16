#include "main.h"
/**
 * _printf - this is a replica of the original printf function
 * from the C programming langauge.
 * @format: string
 * Return: count
 */
int _printf(const char *format, ...)
{
	int i, count;
	va_list args;

	count = 0;
	va_start(args, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			count++;
		}
		else
		{
			if (format[i + 1] == 's')
			{
				count = prrintstr(va_arg(args, char *)) + count;
			}
			if (format[i + 1] == 'c')
			{
				count += printchar(args);
			}
			if (format[i + 1] == '%')
			{
				count = porcent();
			}
			if (format[i + 1] == 'd')
			{
				count += printnum(args);
			}
			if (format[i + 1] == 'i')
			{
				count += printnum(args);
			}
			i++;
		}
	}
	return (count);
}
