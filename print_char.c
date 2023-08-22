#include "main.h"
/**
 * print_char - prints char
 * @c: the char to be printed
 * Return: 1
 */
int print_char(char c)
{
	return (write(1, &c, 1));
}
