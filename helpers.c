#include "main.h"
#include <unistd.h>

/**
 * print_char - prints a single character
 * @c: the character to print
 * Return: number of characters printed (1)
 */
int print_char(char c)
{
	return (_putchar(c));
}

/**
 * print_string - prints a string of characters
 * @str: the string to print
 * Return: number of characters printed
 */
int print_string(char *str)
{
	int count = 0;

	if (str == NULL)
		str = "(null)";

	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}
	return (count);
}

/**
 * print_int - dummy function for numbers
 * @n: the integer to print
 * Return: number of characters printed
 */
int print_int(int n)
{
    int count = 0;

    if (n == -2147483648)
        return (_putchar('-') + _putchar('2') + print_int(147483648));

    if (n < 0)
    {
        count += _putchar('-');
        n = -n;
    }

    if (n / 10)
        count += print_int(n / 10);

    count += _putchar((n % 10) + '0');

    return (count);
}
