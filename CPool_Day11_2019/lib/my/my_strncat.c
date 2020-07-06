/*
** EPITECH PROJECT, 2019
** my_strncat
** File description:
** my_strncat
*/

int my_strlen2strncat(char const *str)
{
    int i;
    for (i = 0  ;str[i] != '\0'; i++)
    {
    }
    return (i);
}

char *my_strncat(char *dest, const char *src, int nb)
{
    int dest2;
    int src2;

    dest2 = my_strlen2strncat(dest);
    src2 = 0;
    while (src2 < nb && src[src2])
    {
        dest[dest2] = src[src2];
        dest2 += 1;
        src2 += 1;
    }
    dest[dest2] = '\0';
    return (dest);
}
