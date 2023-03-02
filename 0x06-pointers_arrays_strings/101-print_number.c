#include "main.h"
/**
 * print_number - print numbers chars
 * @n: integer params
 * Return: 0
 */

void print_number(int n)
{
	int n1;

	if (n < 0)
	{
	_putchar('-');
	n1 = -n;
	}
	if (n1 / 10 != 0)
	{
	print_number(n1 / 10);
	}
	_putchar((n1 % 10) + '0');
}
