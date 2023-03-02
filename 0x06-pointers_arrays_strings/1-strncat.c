#include "main.h"
/**
 * _strncat - function that concatenates two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n : input value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int dest_len;


	i = 0;
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
