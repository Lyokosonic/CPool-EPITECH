/*
** EPITECH PROJECT, 2019
** my_str_islower
** File description:
** check if str is lower
*/

int my_str_islower(char const *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] < 'a')
            return (0);
        else if (str[i] > 'z')
            return (0);
        i = i + 1;
    }
    return (1);
}
