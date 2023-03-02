#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n
 */
char *leet(char *n)
{
	int i, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";
	for (i = 0
