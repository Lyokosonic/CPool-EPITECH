/*
** EPITECH PROJECT, 2019
** my_strdup
** File description:
** allocates memory and copies the string given as argument in it
*/

#include <stddef.h>
#include <stdlib.h>

int my_strlen_for_strdup(char const *str)
{
    int i ;
    for (i = 0  ;str[i] != '\0'; i++)
    {
    }
    return (i);
}

char *my_strcpy_for_strdup(char *dest, char const *src)
{
    int i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

char *my_strdup(char const *src)
{
    char *dest = malloc(my_strlen_for_strdup (src) + 1);
    if (dest == NULL) return NULL;
    my_strcpy_for_strdup(dest, src);
    return dest;
}
