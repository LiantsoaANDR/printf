#include "main.h"
#include <stdlib.h>
/**
 * print_binary - print decimal numb as binary number
 * @n: the the decimal number to print in binary
 * Return: the number of binary number printed as a char
 */
int print_binary(unsigned int n)
{
	char bin[] = "01";
	char *buf;
	int l, i = 0;

	if (!n)
		return (print_char('0'));

	buf = malloc(sizeof(unsigned int) * 8);
	if (!buf)
		return (0);
	/*Store n as a string and in binary and in reverse*/
	while (n > 0)
	{
		buf[i] = bin[n % 2];
		n /= 2;
		i++;
	}
	/*Print that string of binary number in reverse*/
	for (i = i - 1; i >= 0; i--)
		l += print_char(buf[i]);
	free(buf);

	return (l);
}
