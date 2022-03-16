# _printf

## Description.

This printf function **...our _printf function** works exactly the same as the printf function in the **C programming language**. Anything that would work in the **printf** function found in the C programming language will also work on this one.

### What is the printf function?
**The printf() function** is used to print the **“character”, string, float, integer, octal, and hexadecimal values** onto the output screen. We use printf() function with a %d format specifier to display the value of an integer variable.26

Our **function** should be succesfully compiled and should also return the number of characters printed without the NULLL byte.
## Prototype
`int _printf(const char *format, ...);`
This is the protype with start with and build our _printf function from.
- Format is a string of charcters.
- Returns the amount of characters printed without the NULL byte.
- For more info try `man_3_printf`
## Compilation process
We compiled our code using this:
`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c`
# Testing
## main.c file
- We used the **main.c file** provided to use by Holberton.
```#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 `* main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
```
## Output
The output that prints it should look like this:
```Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Unsigned:[2147484671]
Unsigned:[2147484671]
Unsigned octal:[20000001777]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[800003ff, 800003FF]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Address:[0x7ffe637541f0]
Address:[0x7ffe637541f0]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
Unknown:[%r]
Unknown:[%r]
```
## About
**This is a project done for the Holberton School.**

## People in question
**Ian M. Bonano**
**Yaniel Delgado**
