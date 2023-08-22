#include "main.h"
/**
 * print_format - prints arguments from printf
 * @format: the format to print
 * @list: the list of arguments to print
 * Return: the number of arg printed
 */
int print_format(char format, va_list list)
{
	char *str;
	int nbr = 0;

	switch (format)
	{
		case 'c':
			nbr += print_char(va_arg(list, int));
			break;
		case 's':
			str = va_arg(list, char *);
			if (str)
				nbr += print_string(str);
			break;
		case '%':
			nbr += print_char('%');
			break;
		case 'd':
		case 'i':
			nbr += print_number(va_arg(list, double));
			break;
		default:
			nbr += print_char('%');
			nbr += print_char(format);
	}
	return (nbr);
}