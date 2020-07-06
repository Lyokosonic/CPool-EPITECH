/*
** EPITECH PROJECT, 2019
** my_str_to_word_array
** File description:
** Write a function that splits a string into words.
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "include/my.h"

int my_char_is_alpha(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (1);
    return (0);
}

int my_count_words(char const *str)
{
    int i = 0;
    int nb = 0;

    while (str[i]) {
        while (my_char_is_alpha(str[i]) == 0 && str[i])
            i++;
        while (my_char_is_alpha(str[i]) == 1 && str[i])
            i++;
        if (my_char_is_alpha(str[i - 1]) == 1)
            nb++;
    }
    return (nb);
}

int my_length_word(char const *str, int index)
{
    int i = 0;
    int length = 0;
    int current_word = 0;

    while (str[i]) {
        while (my_char_is_alpha(str[i]) == 0 && str[i])
            i++;
        while (my_char_is_alpha(str[i]) == 1 && str[i]) {
            i++;
            length++;
        }
        if (current_word == index)
            return (length + 1);
        i++;
        current_word++;
        length = 0;
    }
    return (0);
}

char **my_full_fill_tab(char const *str, char **tab)
{
    int x = 0;
    int y = 0;
    int i = 0;

    while (str[i]) {
        while (my_char_is_alpha(str[i]) == 0 && str[i])
            i++;
        while (my_char_is_alpha(str[i]) == 1 && str[i]) {
            tab[x][y] = str[i];
            i++;
            y++;
        }
        while (my_char_is_alpha(str[i]) == 0 && str[i])
            i++;
        tab[x][y] = '\0';
        x++;
        y = 0;
    }
    tab[x] = 0;
    return (tab);
}

char **my_str_to_word_array(char const *str)
{
    int nb_words;
    char **tab;
    int i = 0;

    if (str == 0)
        return (0);
    while (my_char_is_alpha(str[i]) == 0 && str[i] != '\0')
        i++;
    if (str[i] == '\0')
        return (0);
    nb_words = my_count_words(str);
    tab = malloc((nb_words + 1) * sizeof(char *));
    printf("%d", nb_words);
    if (tab == 0)
        return (0);
    for (int j = 0; j < nb_words; j++) {
        tab[j] = malloc(my_length_word(str, j) * sizeof(char));
    }
    my_full_fill_tab(str, tab);
    return (tab);
}
