/*
** EPITECH PROJECT, 2019
** concat_params
** File description:
** turns the command-line given arguments into a single string
*/

#include <stdlib.h>

void my_putchar_for_concat(char c)
{
    write(1, &c,  1);
}

int my_strlen_for_concat(char const *str)
{
    int i ;
    for (i = 0  ;str[i] != '\0'; i++)
    {
    }
    return (i);
}

int param_len(int ac, char **av)
{
    int i = 0;
    int len = 0;
    while (i != ac) {
        len += (my_strlen_for_concat(av[i]) + 1);
        i += 1;
    }
    return (len);
}

int my_putstr_for_concat(char const *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        my_putchar_for_concat(str[i]);
        i++;
    }
}

char *concat_params(int ac, char **av)
{
    char *dest = malloc(sizeof(char) * (param_len(ac, av) + 1));
    int i = 0;
    int a = 0;
    int k = 0;
    while (i != ac) {
        a = 0;
        while (av[i][a] != '\0') {
            dest[k] = av[i][a];
            k += 1;
            a += 1;
        }
        dest[k] = '\n';
        i += 1;
        k += 1;
    }
    dest[k] = '\0';
    return (dest);
}
