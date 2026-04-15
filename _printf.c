#include "main.h"

/**
 * _printf - prints formatted output
 * @format: format string
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;

			if (format[i] == '\0')
				return (-1);

			if (format[i] == 'c')
				count += print_char(va_arg(args, int));
			else if (format[i] == 's')
				count += print_string(va_arg(args, char *));
			else if (format[i] == 'd' || format[i] == 'i')
				count += print_int(va_arg(args, int));
			else if (format[i] == '%')
				count += print_char('%');
			else
			{
				count += print_char('%');
				count += print_char(format[i]);
			}
		}
		else
		{
			count += print_char(format[i]);
		}

		i++;
	}

	va_end(args);

	return (count);
}
