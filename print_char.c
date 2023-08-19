#include "main.h"
/**
 * print_char - prints char
 * @c: the char to be printed
 * Return: void
 */
void print_char(char c)
{
	write(1, &c, 1);
}
