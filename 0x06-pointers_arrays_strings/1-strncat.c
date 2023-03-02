#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n : number of bytes from source
 *
 * Return: pointer to resulting string dest
 *
 */

char *_strncat(char *dest, char *src, int n)

{
	int i;
	int dest_len;

	while (dest[dest_len] != '\0')
	{
	dest_len++;
	}
	dest_len = 0;
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
	dest[dest_len + i] = src[i];
	}
	dest[dest_len] = '\0';

	return (dest);
}
