#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: a pointer to the destination memory
 * @src: a pointer to the source memory
 * @n: the number of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	for (i = 0; i < n; i++)
	{
	dest[i]=src[i];
	}
	return (dest);
}
