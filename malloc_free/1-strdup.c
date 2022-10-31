#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 **_strdup- function malloc and free
 *@str: variable malloc
 *Return: zero
 */
char *_strdup(char *str)
{
    str = malloc(size_t * sizeof(char));

    if (str == NULL)
    {
        return (NULL);
    }

    return (str);
}