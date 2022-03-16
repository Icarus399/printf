#include "main.h"

/**
  * convert - converts one type of data into another
  * @num: number
  * @base: ...
  * Return: characters
  */

char *convert(unsigned int num, int base)
{
	static const char character[] = "0123456789ABCDEF";
	static char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';

	while (num != 0)
	{
		*--ptr = character[num % base];
		num = num / base;
	}
	return (ptr);
}
