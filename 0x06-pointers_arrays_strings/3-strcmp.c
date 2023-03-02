#include "main.h"
/**
 * _strcmp - function that compares two strings
 * @s1: first string to compare
 * @s2: second string to be compared
 * Return:s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))

	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
