#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * _strchr - entry
 * @s: input
 * @c: input
 * Return: always 0
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
	if (s[i] == c)
	return (&s[i]);
	}
	return (0);
}
