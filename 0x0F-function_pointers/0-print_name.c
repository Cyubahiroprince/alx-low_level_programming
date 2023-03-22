#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints name used pointer to function
 * @name: character to add
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL && f == NULL)
		return;
	f(name);
}
