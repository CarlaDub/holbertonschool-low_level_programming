#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to new string, or NULL
 */
char *str_concat(char *s1, char *s2)
{
    char *result;
    unsigned int i, j, len1, len2;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    len1 = strlen(s1);
    len2 = strlen(s2);

    result = malloc(len1 + len2 + 1);
    if (result == NULL)
        return (NULL);

    for (i = 0; i < len1; i++)
        result[i] = s1[i];

    for (j = 0; j < len2; j++)
        result[i + j] = s2[j];

    result[i + j] = '\0';

    return (result);
}
