#include "main.h"
/**
 * print_numbers - print the number from 0 to 9
 *@n:print_numbers
 * Return: always 0
 */
void print_numbers(void n)
{
	if (n >= '0' && n <= '9')
	_putchar (n);
	_putchar ("\n");

	else
		return (0);
}

