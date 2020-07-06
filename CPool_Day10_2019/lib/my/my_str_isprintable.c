/*
** EPITECH PROJECT, 2019
** my_str_isprintable
** File description:
** check if the string passed as parameter only contains printable characters
*/

int my_str_isprintable(char const *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] < ' ')
            return (0);
        else if (str[i] > '~')
            return (0);
        i = i + 1;
    }
    return (1);
}
