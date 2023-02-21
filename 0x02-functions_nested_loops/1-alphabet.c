#include <stdio.h>
#include "main.h"
/**
 * main - print alphabet in lowercase
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
		_putchar(l);
	_putchar('\n');
	return (0);
}
