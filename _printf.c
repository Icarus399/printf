#include "main.h"
/**
 * _printf - this is a replica of the original printf function
 * from the C programming langauge.
 * @format: string
 * Return: count
 */
int _printf(const char *format, ...)
{
	int i, num;
	va_list args;

	num = 0;
	va_start(args, format);

	if (format == NULL)
	{
		return (-1);
	}
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			num++;
		}
		else
		{
			if (format[i + 1] == 's')
			{
				num = prrintstr(va_arg(args, char *)) + num;
			}
			if (format[i + 1] == 'c')
			{
				num += printchar(args);
			}
			if (format[i + 1] == '%')
			{
				num = porcent();
			}
			if (format[i + 1] == 'd')
			{
				num += printnum(args);
			}
			i++;
		}
	}
	return (num);
}
