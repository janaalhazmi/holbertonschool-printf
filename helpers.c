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
	(void)n;
	return (0);
}
