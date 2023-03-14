#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup -  function returns a pointer to the duplicated string
 * @str: to check
 * Return: NULL
 */
char *_strdup(char *str)
{
if (str == NULL)
{
return (NULL);
}
else
{
char *to = strdup(str);
return (to);
}
}
