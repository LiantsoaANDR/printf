#include "main.h"
/**
 * print_number - prints number on the arg list
 * @n: the number to print
 * Return: the number of digit printed as a char
 */
int print_number(double n)
{
	char numb[] = "0123456789";
	double x;
	int i, l = 0;

	if (n < 0)
	{
		l += print_char('-');
		n = -n;
	}
	x = n;
	while (x > 10)
	{
		x /= 10;
	}
	i = (int)x;
	l += print_char(numb[i]);
	while (x < n)
	{
		x *= 10;
		i = (int)x;
		l += print_char(numb[i % 10]);
	}
	return (l);

}
