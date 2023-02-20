#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Desciprtion: print alphabet in lowcase except e,q
 * Return: always 0 (success)
 *
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (l != 'q' && l != 'e')
			putchar(l);
	}
	putchar('\n');
	return (0);
}
