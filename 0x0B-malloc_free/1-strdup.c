#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup -  function returns a pointer to the duplicated string
 * @str: a pointer to the string
 * Return: NULL
 */
char *_strdup(char *str)
{
	char *new_str = malloc(strlen(str) + 1);

        if (new_str == NULL)
        {
        return (NULL);
        }
        if (str == NULL)
        {
        return (NULL);
        }
        strcpy(new_str, str);
        return (new_str);
}
