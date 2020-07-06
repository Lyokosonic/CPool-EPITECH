/*
** EPITECH PROJECT, 2019
** my_str_isalpha
** File description:
** returns if is alpha
*/

int my_str_isalpha(char const *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] < '0')
            return (0);
        else if (str[i] > '9' && str[i] < 'A' || str[i] > 'Z' && str[i] < 'a')
            return (0);
        else if (str[i] > 'z')
            return (0);
        i = i + 1;
    }
    return (1);
}
