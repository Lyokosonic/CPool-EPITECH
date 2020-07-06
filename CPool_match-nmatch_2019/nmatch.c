/*
** EPITECH PROJECT, 2019
** Nmatch
** File description:
** count the number of times two strings match.
*/

int nmatch(char const *s1, char const *s2)
{
    while (*s2 == '*')
    {
        if (*s1 == '\0')
            return (nmatch(s1, s2 + 1));
        else
            return (nmatch(s1 + 1, s2) + nmatch(s1, s2 + 1));
    }
    if (*s1 == '\0' && *s2 == '\0')
        return (1);
    if (*s2 == *s1)
        return (nmatch(s1 + 1, s2 + 1));
    else
        return (0);
}
