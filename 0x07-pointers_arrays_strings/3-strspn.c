#include "main.h"
/**
 *  _strspn -  function that gets the length of a prefix substring
 *  @s: apointer to the string
 *  @accept: a pointer to the string
 *  Return: _strspin
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int c = 0;

	for (i = 0; s[i]; i++)
	{
	for (j = 0; accept[j]; j++)
	{
	if (s[i] == accept[j])
	{
	c++;
	}
	}
	if (!accept[j])
	{
	break;
	}
	}
	return (i);
}
