#include "main.h"
/**
 * _printf - a function that works like "printf" form the std library
 * @format: a string to write with specifier
 * Return: the number of char prindted (excluding NULL byte)
 */
int _printf(const char *format, ...)
{
	va_list list;
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
			if (!format[i])
				return (-1);
			length += print_format(format[i], list);
		}
		else
		{
			length += print_char(format[i]);
		}
		i++;
	}
	va_end(list);
	return (length);
}
