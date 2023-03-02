#include "main.h"
/**
 * string_toupper - function that changes all lowercase letters to uppercase
 * @n: pointer
 * Return: n
 */
char *string_toupper(char *n)
{
	int i;

	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'Z')
		i++;
	}
	return (n);
}
