#include <stdio.h>
#include "main.h"
/**
 * main - print the name of the pragram
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
