#include "main.h"
/**
 * _strlen - function that returns the length of string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int leng = 0;

	while (*s != '\0')
	{
		leng++;
		s++;
	}
	return (leng);
}
