#include "main.h"
/**
 *  _strspn -  function that gets the length of a prefix substring
 *  @s: apointer to the string
 *  @accept: a pointer to the string
 *  Return: _strspn
 */
unsigned int _strspn(char *s, char *accept)
{
	int j;
	unsigned int c = 0;

	while (*s)
	{
	for (j = 0; accept[j]; j++)
	{
	if (*s == accept[j])
	{
	c++;
	break;
	}
	else if (accept[j + 1] == '\0')
	return (c);
	}
	s++;
	}
	return (c);
}
