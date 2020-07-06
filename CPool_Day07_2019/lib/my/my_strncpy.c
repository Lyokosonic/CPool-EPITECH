/*
** EPITECH PROJECT, 2019
** my_strncpy
** File description:
** copies n character form string into another
*/

#include <stdio.h>

char *my_strncpy(char *dest , char const *src , int n)
{
    int i = 0;
    while (src[i] != '\0' && i < n)
    {
        dest[i] = src[i];
        i = i + 1;
    }
    while (i <  n)
    {
        dest[i] = '\0';
        i++;
    }
    return dest;
}
