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
	int i = 0, j = 0;
	int num = 0;
	int arr [13];
	unsigned int n;

	num = va_arg(args, int);

	if (i < 0)
	{
		i += _putchar('-');
		n = (i * -1);
	}
		n = i;

		convert(num, 10);

	if (n == 0)
	{
		num =+ _putchar(n + '0');
		return (num);
	}
	while (n != 0)
	{
		arr[j] = n % 10;
		n = n / 10;
		j++;
	}
	for (j = j - 1; j >= 0; j--)
	{
		num =+ _putchar(arr[j] + '0');
	}
	return (num);
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



