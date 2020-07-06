/*
** EPITECH PROJECT, 2019
** my_strstr
** File description:
** Reproduce the behavior of thestrstr
*/

#include <stdio.h>

char *my_strstr(char *str, char const *to_find)
{
    int i;
    if (str[0] != '\0')
    {
        i = 0;
        while (to_find[i] != '\0')
        {
            if (to_find[i] != str[i])
                return (my_strstr(str + 1, to_find));
            i = i + 1;
        }
        return (str);
    }
    else
        return (0);
}
