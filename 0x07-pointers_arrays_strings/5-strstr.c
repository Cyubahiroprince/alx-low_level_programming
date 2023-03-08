#include "main.h"
#include <stddef.h>
/**
 * _strstr - function that locates a substring
 * @hystack: a pointer of the string
 * @needle: a pointer of the substring
 * Return: NULL
 */
char *_strstr(char *hystack, char *needle)
{
	char *hystack_len = hystack;
	char *needle_len = needle;

	for (*hystack != '\0'; hystack++)
	{
	while (*hystack_len == *needle_len && *hystack_len != '\0')
	{
	hystack_len++;
	needle_len++;
	}
	if (*needle_len == '\0')
	return (hystack);
	}
	return (NULL);
}
