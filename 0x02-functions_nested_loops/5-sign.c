#include <stdio.h>
#include "main.h"
/**
 * print_sign - print the  sign of number
 *@n: the number to be checked
 *Return: 1 for possitive num, -1 for negative num or 0 for anything else
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(n);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(n);
		return (-1);
	}
	else
	{
		_putchar(n);
		return (0);
	}
}
