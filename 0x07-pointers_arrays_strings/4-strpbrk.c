#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - function that takes two arguments
 * @s: a pointer to the string
 * @accept: a pointer to the string
 * Return: NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char p;

	while (*s)
	{
	for (p = *accept; p; p++)
	{
	if (*s == p)
	{
	return (s);
	}
	}
	s++;
	}
	return (NULL);
}
