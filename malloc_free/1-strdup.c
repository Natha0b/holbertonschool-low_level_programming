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
    char *a;
    int i;
    int s;

    if (str == NULL)
    {
        return (NULL);
    }
    for (i = 0; str[i] != '\0'; i++)
    {
    }
    a = malloc((i + 1) * sizeof(char));
    
    if (a == NULL)
    {
        return (NULL);
    }
    for (s = 0; str[s] != '\0'; s++)
    {
        a[s] = str[s];
    }
    a[s] = '\0';
    
    return (a);
}
