#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Desciprtion: all possible combinations of single-digit numbers program
 * Return: always 0 (success)
 *
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar((n % 10) + '0');
		if (n == 9)
			continue;
		putchar('.');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
