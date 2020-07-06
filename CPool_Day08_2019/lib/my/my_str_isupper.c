/*
** EPITECH PROJECT, 2019
** my_str_isupper
** File description:
** check if string is upper
*/

int my_str_isupper(char const *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] < 'A')
            return (0);
        else if (str[i] > 'Z')
            return (0);
        i = i + 1;
    }
    return (1);
}
