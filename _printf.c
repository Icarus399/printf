#include "main.h"
int _printf(char *format, ...)
{
	char *p;
	int idx;
	char *str;
	int len;

	va_list args;
	va_start (args, format);

	p = format;

	for (p = format; *p != '\0'; p++)
	{
		if (*p != '%')
		{
			len += _putchar(*p);
			continue;
		}
		p++;

		switch (*p)
		{
			case 'c': idx = va_arg(args, int);
					  len += _putchar(idx);
					  break;

			case 'd': idx = va_arg(args, int);
					  if (idx < 0)
					  {
						  idx = -idx;
						  len += _putchar('-');
					  }
					  _puts(convert(idx, 10));
					  break;

			case 'i': idx = va_arg(args, int);
					  if (idx < 0)
					  {
						  idx = -idx;
						  len += _putchar('-');
					  }
					  _puts(convert(idx, 10));
					  break;

			case 's': str = va_arg(args,char *);
					  len += _puts(str);
					  break;
			default:

					  _putchar('%');
					  _putchar(*p);
					  break;
		}
	}
	va_end(args);
	return (len);
}
