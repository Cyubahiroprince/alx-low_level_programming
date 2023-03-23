#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function returns the sum of all it parameters.
 * @n: fixed arg > amount of arguments.
 *
 * Return: sum of its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list o;
	unsigned int i;
	int sum = 0;

	va_start(o, n);

	for (i = 0; i < n; i++)
		sum = sum + va_arg(o, int);
	if (n == 0)
	{
		return (0);
	}
	va_end(o);
	return (sum);
}
