#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - function that prints name
 * @name: pointer print name
 * @f: pointer
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
