#include "main.h"
/**
 * print_string - prints string
 * @s: string to print
 * Return: the number of char written
 */
int print_string(char *s)
{
	int l = 0;

	while (s[l])
		l++;
	write(1, s, l);
	return (l);
}
