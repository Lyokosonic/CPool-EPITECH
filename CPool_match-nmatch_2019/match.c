/*
** EPITECH PROJECT, 2019
** Match
** File description:
** find out if two strings match
*/

#include "include/my.h"

int match(char const *s1, char const *s2)
{
    while (*s2 == '*')
    {
        if (*s1 == '\0')
            return (match(s1, s2 + 1));
        else
            return (match(s1, s2 + 1) || match(s1 + 1, s2));
    }
    if (*s1 == '\0' && *s2 == '\0')
        return (1);
    if (*s2 == *s1)
        return (match(s1 + 1, s2 + 1));
    else
        return (0);
}
