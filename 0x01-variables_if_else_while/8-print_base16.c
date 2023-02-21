#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Desciprtion: print all numbers of base 16 in lowcase
 * Return: always 0 (success)
 *
 */
int main(void)
{
	int n;
	char l;

	for (n = 'a'; n < 'z'; n++)
		putchar((n % 10) + '0');
	for (l = 'a'; l <= 'f'; l++)
		putchar(l);
	putchar('\n');
	return (0);
}
