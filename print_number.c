#include "main.h"
#include <stdlib.h>
/**
 * print_number - prints number on the arg list
 * @n: the number to print
 * Return: the number of digit printed as a char
 */
int print_number(long n)
{
	char numb[] = "0123456789";
	char *buf;
	int i = 0, l = 0;

	if (!n)
		l += print_char('0');
	if (n < 0)
	{
		l += print_char('-');
		n = -n;
	}

	buf = malloc(sizeof(long));
	if (!buf)
		return (0);
	/*Store n as a  string in reverse*/
	while (n > 0)
	{
		buf[i] = numb[n % 10];
		n /= 10;
		i++;
	}
	/*Print the string of number in reverse*/
	for (i = i - 1; i >= 0; i--)
		l += print_char(buf[i]);
	free(buf);

	return (l);

}
