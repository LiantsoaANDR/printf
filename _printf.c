#include "main.h"
/**
 * _printf - a function that works like "printf" form the std library
 * @format: a string to write with specifier
 * Return: the number of char prindted (excluding NULL byte)
 */
int _printf(const char *format, ...)
{
	va_list list;
	char *str;
	int i = 0;
	int length = 0;

	if (!format)
		return (-1);
	va_start(list, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					length += print_char(va_arg(list, int));
					break;
				case 's':
					str = va_arg(list, char *);
					if (str)
						length += print_string(str);
					break;
				case '%':
					length += print_char('%');
					break;
				default:
					length += print_char('%');
					length += print_char(format[i]);
			}
			i++;
		}
		if (format[i])
		{
			length += print_char(format[i]);
			i++;
		}
	}
	va_end(list);
	return (length);
}
