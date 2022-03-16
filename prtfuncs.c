#include "main.h"
/** _putchar - copy of the putchar command
 * @c: The character to print
 * Return: 1 if succesfu;, -1 on error.
 */

int porcent(void)
{
    int count = 0;

    write(1, "%", 1);
    count++;
    return (count);
}
int _putchar(char c)
{
	return (write(1, &c, 1));
}
int _puts(const char *str)
{
	int idx = 0;

	while (str[idx])
	{
		if (_putchar(str[idx]) == EOF)
		{
			return (EOF);
		}
		idx++;
	}
	return (idx);
}
int printnum(va_list args)
{
	int num = va_arg(args, int);
	int idx = 0;
	int i = 0;
	int arr[13];
	unsigned int n;
	{
		if (num < 0)
		{
			i += _putchar ('-');
			n = num * (-1);
		}
		else
			n = num;

		if (n == 0)
		{
			i += _putchar(n + '0');
			return (i);
		}

		while (n != 0)
		{
			arr[idx] = n % 10;
			n /= 10;
			idx++;
		}

		for (idx -= 1; idx >= 0; idx--)
		{
			i += _putchar(arr[idx] + '0');
		}
		return(i);
	}
}
int prrintstr(char *ch)
{
	int idx = 0;

	if (ch == NULL)
		ch = "(null)";
	for(idx = 0; ch[idx] != '\0'; idx++)
	{
		_putchar(ch[idx]);
	}
		return (idx);
}

int printchar(va_list args)
{
	char ch;

	ch = va_arg(args, int);
	_putchar(ch);
	return (1);
}
