#include "main.h"
/** _putchar - copy of the putchar command
 * @c: The character to print
 * Return: 1 if succesfu;, -1 on error.
 */

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
int printnum(int idx, int count)
{
	int num;

	if (idx < 0)
	{
		_putchar('-');
		count++;
		num = (idx * -1);
	}
	else
		num = idx;

	if (num / 10)
	{
		count = printnum(num / 10, count);
	}
	_putchar(num % 10 + '0');
	count++;
	return (count);
}






