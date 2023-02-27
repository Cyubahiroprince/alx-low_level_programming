#include "main.h"
#include <string.h>
/**
 * strlen - a function that returns the length of a string
 * @len :get the length of string
 * Return: @len
 */
int strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}

