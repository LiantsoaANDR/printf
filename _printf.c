#include <main.h>
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
					print_char(va_arg(list, int));
					break;
				case 's':
					str = va_arg(list, char *);
					if (str)
						print_string(str);
					break;
				case '%':
					print_char('%');
					break;
			}
			i++;
		}
		if (format[i])
		{
			print_char(format[i]);
			i++;
		}
	}
	va_end(list);
}
