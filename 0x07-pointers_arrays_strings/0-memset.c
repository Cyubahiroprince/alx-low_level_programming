#include "main.h"
/**
 * _memset - function that fills memory with constant byte
 * @s: is pointer to the memory
 * @b: is the value of the costant byte
 * @n: is number of byte
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
	}
	return (s);
}
