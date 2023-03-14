#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * _atoi - converts a string to an integer.
 *
 * @s: string to convert.
 *
 * Return: the converted integer.
 */
int _atoi(char *s)
{
	int sign = 1, result = 0;
	char *p = s;

	while (*p != '\0')
	{
	if (*p == '-')
	{
	sign *= -1;
	}
	else if (*p >= '0' && *p <= '9')
	{
	result = result * 10 + (*p - '0');
	}
	else if (result > 0)
	{
	break;
	}
	p++;
	}
	return (sign * result);
}
